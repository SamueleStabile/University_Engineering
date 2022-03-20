namespace Samuele_Stabile_Pila
{
    partial class frmAuto
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmAuto));
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox_Targa = new System.Windows.Forms.TextBox();
            this.textBox_Cilindrata = new System.Windows.Forms.TextBox();
            this.button_Elimina = new System.Windows.Forms.Button();
            this.button_Inserisci = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.listBox_cilindrata = new System.Windows.Forms.ListBox();
            this.listBox_Targa = new System.Windows.Forms.ListBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.listBoxParchi = new System.Windows.Forms.ListBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.Visualizzabutton = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(42, 67);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(64, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "Targa";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(439, 67);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(97, 24);
            this.label2.TabIndex = 1;
            this.label2.Text = "Cilindrata";
            // 
            // textBox_Targa
            // 
            this.textBox_Targa.Enabled = false;
            this.textBox_Targa.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox_Targa.Location = new System.Drawing.Point(112, 65);
            this.textBox_Targa.Name = "textBox_Targa";
            this.textBox_Targa.Size = new System.Drawing.Size(181, 29);
            this.textBox_Targa.TabIndex = 2;
            // 
            // textBox_Cilindrata
            // 
            this.textBox_Cilindrata.Enabled = false;
            this.textBox_Cilindrata.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox_Cilindrata.Location = new System.Drawing.Point(542, 65);
            this.textBox_Cilindrata.Name = "textBox_Cilindrata";
            this.textBox_Cilindrata.Size = new System.Drawing.Size(181, 29);
            this.textBox_Cilindrata.TabIndex = 3;
            // 
            // button_Elimina
            // 
            this.button_Elimina.Enabled = false;
            this.button_Elimina.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_Elimina.ForeColor = System.Drawing.Color.Red;
            this.button_Elimina.Location = new System.Drawing.Point(443, 116);
            this.button_Elimina.Name = "button_Elimina";
            this.button_Elimina.Size = new System.Drawing.Size(280, 47);
            this.button_Elimina.TabIndex = 4;
            this.button_Elimina.Text = "ELIMINA";
            this.button_Elimina.UseVisualStyleBackColor = true;
            this.button_Elimina.Click += new System.EventHandler(this.button_Elimina_Click);
            // 
            // button_Inserisci
            // 
            this.button_Inserisci.Enabled = false;
            this.button_Inserisci.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_Inserisci.ForeColor = System.Drawing.Color.LimeGreen;
            this.button_Inserisci.Location = new System.Drawing.Point(33, 116);
            this.button_Inserisci.Name = "button_Inserisci";
            this.button_Inserisci.Size = new System.Drawing.Size(280, 47);
            this.button_Inserisci.TabIndex = 5;
            this.button_Inserisci.Text = "INSERISCI";
            this.button_Inserisci.UseVisualStyleBackColor = true;
            this.button_Inserisci.Click += new System.EventHandler(this.button_Inserisci_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.listBox_cilindrata);
            this.groupBox1.Controls.Add(this.listBox_Targa);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox1.Location = new System.Drawing.Point(33, 186);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(690, 243);
            this.groupBox1.TabIndex = 6;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Autovetture Disponibili";
            // 
            // listBox_cilindrata
            // 
            this.listBox_cilindrata.Enabled = false;
            this.listBox_cilindrata.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.listBox_cilindrata.FormattingEnabled = true;
            this.listBox_cilindrata.ItemHeight = 20;
            this.listBox_cilindrata.Location = new System.Drawing.Point(369, 54);
            this.listBox_cilindrata.Name = "listBox_cilindrata";
            this.listBox_cilindrata.SelectionMode = System.Windows.Forms.SelectionMode.None;
            this.listBox_cilindrata.Size = new System.Drawing.Size(315, 184);
            this.listBox_cilindrata.TabIndex = 4;
            // 
            // listBox_Targa
            // 
            this.listBox_Targa.Enabled = false;
            this.listBox_Targa.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.listBox_Targa.FormattingEnabled = true;
            this.listBox_Targa.ItemHeight = 20;
            this.listBox_Targa.Location = new System.Drawing.Point(6, 54);
            this.listBox_Targa.Name = "listBox_Targa";
            this.listBox_Targa.SelectionMode = System.Windows.Forms.SelectionMode.None;
            this.listBox_Targa.Size = new System.Drawing.Size(319, 184);
            this.listBox_Targa.TabIndex = 3;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(365, 27);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(129, 24);
            this.label4.TabIndex = 2;
            this.label4.Text = "CILINDRATA";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(9, 27);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(80, 24);
            this.label3.TabIndex = 1;
            this.label3.Text = "TARGA";
            // 
            // listBoxParchi
            // 
            this.listBoxParchi.FormattingEnabled = true;
            this.listBoxParchi.ItemHeight = 24;
            this.listBoxParchi.Location = new System.Drawing.Point(31, 28);
            this.listBoxParchi.Name = "listBoxParchi";
            this.listBoxParchi.Size = new System.Drawing.Size(136, 52);
            this.listBoxParchi.TabIndex = 7;
            this.listBoxParchi.SelectedIndexChanged += new System.EventHandler(this.listBox1_SelectedIndexChanged);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.Visualizzabutton);
            this.groupBox2.Controls.Add(this.listBoxParchi);
            this.groupBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox2.Location = new System.Drawing.Point(784, 186);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(196, 135);
            this.groupBox2.TabIndex = 8;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Parco Selezionato";
            // 
            // Visualizzabutton
            // 
            this.Visualizzabutton.Location = new System.Drawing.Point(42, 86);
            this.Visualizzabutton.Name = "Visualizzabutton";
            this.Visualizzabutton.Size = new System.Drawing.Size(112, 39);
            this.Visualizzabutton.TabIndex = 8;
            this.Visualizzabutton.Text = "Seleziona";
            this.Visualizzabutton.UseVisualStyleBackColor = true;
            this.Visualizzabutton.Click += new System.EventHandler(this.Visualizzabutton_Click);
            // 
            // frmAuto
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSize = true;
            this.ClientSize = new System.Drawing.Size(1020, 450);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.button_Inserisci);
            this.Controls.Add(this.button_Elimina);
            this.Controls.Add(this.textBox_Cilindrata);
            this.Controls.Add(this.textBox_Targa);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "frmAuto";
            this.Text = "Pila di Vetture";
            this.Load += new System.EventHandler(this.frmAuto_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBox_Targa;
        private System.Windows.Forms.TextBox textBox_Cilindrata;
        private System.Windows.Forms.Button button_Elimina;
        private System.Windows.Forms.Button button_Inserisci;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.ListBox listBox_cilindrata;
        private System.Windows.Forms.ListBox listBox_Targa;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.ListBox listBoxParchi;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button Visualizzabutton;
    }
}

