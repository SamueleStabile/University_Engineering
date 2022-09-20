
int main (void)
{
char *s = "stringa"; 
/* s è un puntatore ad una stringa 
 * posizionata nel segmento di sola 
 * lettura dell'eseguibile.
 * Quando il programma viene 
 * caricato, questo segmento è     
 * generalmente mappato dal sistema 
 * operativo in una zona della     
 * memoria di sola lettura 
 */

*s = 'a';            
/* questo tenta di scrivere nella 
 * memoria di sola lettura, 
 * causando l'errore di 
 * segmentazione 
 */
}
