# Interfacce memory mapped
# Indirizzi dei registri delle interfacce
# 0xFFFF0000 registro stato/controllo del ricevitore (keyboard)
# 0xFFFF0004 registro dati del ricevitore (keyboard)
# 0xFFFF0008 registro stato/controllo del trasmettitore (display)
# 0xFFFF000c registro dati del trasmettitore (display)
.data
msg: .asciiz "Inserire la pwd: "
psw: .space 32
 
.text
li $s5, '\n'
 
# Stampare il messaggio sul display
la $s0, msg
for_stampa:
    lbu $s1, ($s0)
    beq $s1, $0, end_for_stampa
    move $a0, $s1
    jal putc
    addiu $s0, $s0, 1
    j for_stampa
 
end_for_stampa:
# LETTURA DELLA PSW
la $s0, psw
for_lettura:
    jal getc
    beq $v0, $s5, end_for_lettura
    sb $v0, ($s0)
    addiu $s0, $s0, 1
    li $a0, '*'
    jal putc
    j for_lettura
end_for_lettura:
sb $0, ($s0)
 
li $v0, 10
syscall
 

# GESTIONE DELLA KEYBOARD
getc:
#    v0 = byte ricevuto
    li $t0, 0xffff0000
    gcloop:
        lw $t1, 0 ($t0)
        # LSB ctrl reg ==> READY
        andi $t1,$t1, 0x0001
        beq $t1, $0, gcloop
    lw $v0, 4($t0)
    jr $ra
 
# GESTIONE DEL DISPLAY
putc:
#       a0 = byte da trasmettere
    li $t0, 0xffff0008
    pcloop:
        lw $t1,0($t0)
        andi $t1,$t1, 0x0001
        beq $t1, $0, pcloop
    sw $a0, 4($t0)
    jr $ra