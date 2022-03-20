namespace Biblioteca_1
{
    partial class Form1
    {
        /// <summary>
        /// Variabile di progettazione necessaria.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Pulire le risorse in uso.
        /// </summary>
        /// <param name="disposing">ha valore true se le risorse gestite devono essere eliminate, false in caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Codice generato da Progettazione Windows Form

        /// <summary>
        /// Metodo necessario per il supporto della finestra di progettazione. Non modificare
        /// il contenuto del metodo con l'editor di codice.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.button_visualizza = new System.Windows.Forms.Button();
            this.button_aggiorna = new System.Windows.Forms.Button();
            this.textBox_titolo = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.textBox_codice = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.textBox_prezzo = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.textBox_autore = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.textBox_ncopie = new System.Windows.Forms.TextBox();
            this.button_exit = new System.Windows.Forms.Button();
            this.label_nrlibro = new System.Windows.Forms.Label();
            this.textBox_nrlibro = new System.Windows.Forms.TextBox();
            this.button_prestare = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.prestare_libro = new System.Windows.Forms.Label();
            this.label_visualizza = new System.Windows.Forms.Label();
            this.button_restituire = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.label_qtLibro = new System.Windows.Forms.Label();
            this.textBox_qtLibro = new System.Windows.Forms.TextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.button_salva_file = new System.Windows.Forms.Button();
            this.button_Carica_File = new System.Windows.Forms.Button();
            this.button_crea_file = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(47, 27);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(34, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Menù";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // button_visualizza
            // 
            this.button_visualizza.Location = new System.Drawing.Point(12, 43);
            this.button_visualizza.Name = "button_visualizza";
            this.button_visualizza.Size = new System.Drawing.Size(120, 23);
            this.button_visualizza.TabIndex = 1;
            this.button_visualizza.Text = "1 - Visualizza libro";
            this.button_visualizza.UseVisualStyleBackColor = true;
            this.button_visualizza.Click += new System.EventHandler(this.button_visualizza_Click);
            // 
            // button_aggiorna
            // 
            this.button_aggiorna.Location = new System.Drawing.Point(12, 72);
            this.button_aggiorna.Name = "button_aggiorna";
            this.button_aggiorna.Size = new System.Drawing.Size(120, 23);
            this.button_aggiorna.TabIndex = 2;
            this.button_aggiorna.Text = "2 - Aggiorna";
            this.button_aggiorna.UseVisualStyleBackColor = true;
            this.button_aggiorna.Click += new System.EventHandler(this.button1_Click);
            // 
            // textBox_titolo
            // 
            this.textBox_titolo.Location = new System.Drawing.Point(339, 53);
            this.textBox_titolo.Name = "textBox_titolo";
            this.textBox_titolo.Size = new System.Drawing.Size(100, 20);
            this.textBox_titolo.TabIndex = 3;
            this.textBox_titolo.TextChanged += new System.EventHandler(this.textBox_titolo_TextChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(280, 60);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(29, 13);
            this.label2.TabIndex = 4;
            this.label2.Text = "titolo";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(275, 86);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(39, 13);
            this.label3.TabIndex = 6;
            this.label3.Text = "codice";
            // 
            // textBox_codice
            // 
            this.textBox_codice.Location = new System.Drawing.Point(339, 79);
            this.textBox_codice.Name = "textBox_codice";
            this.textBox_codice.Size = new System.Drawing.Size(100, 20);
            this.textBox_codice.TabIndex = 5;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(275, 112);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(38, 13);
            this.label4.TabIndex = 8;
            this.label4.Text = "prezzo";
            // 
            // textBox_prezzo
            // 
            this.textBox_prezzo.Location = new System.Drawing.Point(339, 105);
            this.textBox_prezzo.Name = "textBox_prezzo";
            this.textBox_prezzo.Size = new System.Drawing.Size(100, 20);
            this.textBox_prezzo.TabIndex = 7;
            this.textBox_prezzo.TextChanged += new System.EventHandler(this.textBox_prezzo_TextChanged);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(272, 138);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(37, 13);
            this.label5.TabIndex = 10;
            this.label5.Text = "autore";
            // 
            // textBox_autore
            // 
            this.textBox_autore.Location = new System.Drawing.Point(339, 131);
            this.textBox_autore.Name = "textBox_autore";
            this.textBox_autore.Size = new System.Drawing.Size(100, 20);
            this.textBox_autore.TabIndex = 9;
            this.textBox_autore.TextChanged += new System.EventHandler(this.textBox_autore_TextChanged);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(271, 163);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(42, 13);
            this.label6.TabIndex = 12;
            this.label6.Text = "n copie";
            this.label6.Click += new System.EventHandler(this.label6_Click);
            // 
            // textBox_ncopie
            // 
            this.textBox_ncopie.Location = new System.Drawing.Point(339, 160);
            this.textBox_ncopie.Name = "textBox_ncopie";
            this.textBox_ncopie.Size = new System.Drawing.Size(100, 20);
            this.textBox_ncopie.TabIndex = 11;
            this.textBox_ncopie.TextChanged += new System.EventHandler(this.textBox4_TextChanged);
            // 
            // button_exit
            // 
            this.button_exit.Location = new System.Drawing.Point(670, 399);
            this.button_exit.Name = "button_exit";
            this.button_exit.Size = new System.Drawing.Size(108, 23);
            this.button_exit.TabIndex = 13;
            this.button_exit.Text = "Exit";
            this.button_exit.UseVisualStyleBackColor = true;
            this.button_exit.Click += new System.EventHandler(this.button_exit_Click);
            // 
            // label_nrlibro
            // 
            this.label_nrlibro.AutoSize = true;
            this.label_nrlibro.Location = new System.Drawing.Point(273, 30);
            this.label_nrlibro.Name = "label_nrlibro";
            this.label_nrlibro.Size = new System.Drawing.Size(41, 13);
            this.label_nrlibro.TabIndex = 14;
            this.label_nrlibro.Text = "nr libro ";
            this.label_nrlibro.Click += new System.EventHandler(this.Label_nrlibro_Click);
            // 
            // textBox_nrlibro
            // 
            this.textBox_nrlibro.Location = new System.Drawing.Point(339, 27);
            this.textBox_nrlibro.Name = "textBox_nrlibro";
            this.textBox_nrlibro.Size = new System.Drawing.Size(100, 20);
            this.textBox_nrlibro.TabIndex = 15;
            this.textBox_nrlibro.TextChanged += new System.EventHandler(this.TextBox_nrlibro_TextChanged);
            // 
            // button_prestare
            // 
            this.button_prestare.Location = new System.Drawing.Point(12, 101);
            this.button_prestare.Name = "button_prestare";
            this.button_prestare.Size = new System.Drawing.Size(120, 23);
            this.button_prestare.TabIndex = 16;
            this.button_prestare.Text = "3 - Prestare";
            this.button_prestare.UseVisualStyleBackColor = true;
            this.button_prestare.Click += new System.EventHandler(this.Button_prestare_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(339, 196);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 20);
            this.textBox1.TabIndex = 17;
            this.textBox1.TextChanged += new System.EventHandler(this.TextBox1_TextChanged);
            // 
            // prestare_libro
            // 
            this.prestare_libro.AutoSize = true;
            this.prestare_libro.Location = new System.Drawing.Point(258, 196);
            this.prestare_libro.Name = "prestare_libro";
            this.prestare_libro.Size = new System.Drawing.Size(56, 13);
            this.prestare_libro.TabIndex = 18;
            this.prestare_libro.Text = "Lb prestati";
            // 
            // label_visualizza
            // 
            this.label_visualizza.AutoSize = true;
            this.label_visualizza.Location = new System.Drawing.Point(9, 364);
            this.label_visualizza.Name = "label_visualizza";
            this.label_visualizza.Size = new System.Drawing.Size(40, 13);
            this.label_visualizza.TabIndex = 19;
            this.label_visualizza.Text = "... ... ...";
            this.label_visualizza.Click += new System.EventHandler(this.Label_visualizza_Click);
            // 
            // button_restituire
            // 
            this.button_restituire.Location = new System.Drawing.Point(13, 131);
            this.button_restituire.Name = "button_restituire";
            this.button_restituire.Size = new System.Drawing.Size(119, 23);
            this.button_restituire.TabIndex = 20;
            this.button_restituire.Text = "4 - Restituire";
            this.button_restituire.UseVisualStyleBackColor = true;
            this.button_restituire.Click += new System.EventHandler(this.Button_restituire_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(13, 160);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(119, 23);
            this.button1.TabIndex = 21;
            this.button1.Text = "5 - Visualizza libreria";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.Button1_Click_1);
            // 
            // label_qtLibro
            // 
            this.label_qtLibro.AutoSize = true;
            this.label_qtLibro.Location = new System.Drawing.Point(467, 34);
            this.label_qtLibro.Name = "label_qtLibro";
            this.label_qtLibro.Size = new System.Drawing.Size(39, 13);
            this.label_qtLibro.TabIndex = 22;
            this.label_qtLibro.Text = "qtLibro";
            // 
            // textBox_qtLibro
            // 
            this.textBox_qtLibro.Location = new System.Drawing.Point(495, 50);
            this.textBox_qtLibro.Multiline = true;
            this.textBox_qtLibro.Name = "textBox_qtLibro";
            this.textBox_qtLibro.Size = new System.Drawing.Size(100, 20);
            this.textBox_qtLibro.TabIndex = 23;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(12, 191);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(120, 23);
            this.button2.TabIndex = 24;
            this.button2.Text = "6 - Inserisci libro";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button_salva_file
            // 
            this.button_salva_file.Location = new System.Drawing.Point(13, 221);
            this.button_salva_file.Name = "button_salva_file";
            this.button_salva_file.Size = new System.Drawing.Size(75, 23);
            this.button_salva_file.TabIndex = 25;
            this.button_salva_file.Text = "7-Salva File";
            this.button_salva_file.UseVisualStyleBackColor = true;
            this.button_salva_file.Click += new System.EventHandler(this.button3_Click);
            // 
            // button_Carica_File
            // 
            this.button_Carica_File.Location = new System.Drawing.Point(13, 251);
            this.button_Carica_File.Name = "button_Carica_File";
            this.button_Carica_File.Size = new System.Drawing.Size(75, 23);
            this.button_Carica_File.TabIndex = 26;
            this.button_Carica_File.Text = "8-Carica File";
            this.button_Carica_File.UseVisualStyleBackColor = true;
            this.button_Carica_File.Click += new System.EventHandler(this.button_Carica_File_Click);
            // 
            // button_crea_file
            // 
            this.button_crea_file.Location = new System.Drawing.Point(13, 280);
            this.button_crea_file.Name = "button_crea_file";
            this.button_crea_file.Size = new System.Drawing.Size(75, 23);
            this.button_crea_file.TabIndex = 27;
            this.button_crea_file.Text = "Crea File";
            this.button_crea_file.UseVisualStyleBackColor = true;
            this.button_crea_file.Click += new System.EventHandler(this.button_crea_file_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(790, 450);
            this.Controls.Add(this.button_crea_file);
            this.Controls.Add(this.button_Carica_File);
            this.Controls.Add(this.button_salva_file);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.textBox_qtLibro);
            this.Controls.Add(this.label_qtLibro);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.button_restituire);
            this.Controls.Add(this.label_visualizza);
            this.Controls.Add(this.prestare_libro);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.button_prestare);
            this.Controls.Add(this.textBox_nrlibro);
            this.Controls.Add(this.label_nrlibro);
            this.Controls.Add(this.button_exit);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.textBox_ncopie);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.textBox_autore);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.textBox_prezzo);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textBox_codice);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textBox_titolo);
            this.Controls.Add(this.button_aggiorna);
            this.Controls.Add(this.button_visualizza);
            this.Controls.Add(this.label1);
            this.ForeColor = System.Drawing.Color.Black;
            this.Name = "Form1";
            this.Text = "by infomatix_biblioteca";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button_visualizza;
        private System.Windows.Forms.Button button_aggiorna;
        private System.Windows.Forms.TextBox textBox_titolo;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textBox_codice;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox textBox_prezzo;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox textBox_autore;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox textBox_ncopie;
        private System.Windows.Forms.Button button_exit;
        private System.Windows.Forms.Label label_nrlibro;
        private System.Windows.Forms.TextBox textBox_nrlibro;
        private System.Windows.Forms.Button button_prestare;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label prestare_libro;
        private System.Windows.Forms.Label label_visualizza;
        private System.Windows.Forms.Button button_restituire;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label_qtLibro;
        private System.Windows.Forms.TextBox textBox_qtLibro;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button_salva_file;
        private System.Windows.Forms.Button button_Carica_File;
        private System.Windows.Forms.Button button_crea_file;
    }
}

