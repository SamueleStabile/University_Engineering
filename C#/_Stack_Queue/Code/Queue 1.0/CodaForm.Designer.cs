namespace Centro_Medico_Alpha
{
    partial class CodaStudioMedicoForm
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(CodaStudioMedicoForm));
            this.label1 = new System.Windows.Forms.Label();
            this.TextBoxNumeroMassimo = new System.Windows.Forms.TextBox();
            this.ButtonApriStudio = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.TextBoxNome = new System.Windows.Forms.TextBox();
            this.ListBoxPazienti = new System.Windows.Forms.ListBox();
            this.ButtonChiudiStudio = new System.Windows.Forms.Button();
            this.ButtoneInserisci = new System.Windows.Forms.Button();
            this.ButtonProssimoPaziente = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(12, 22);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(275, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "Numero Massimo di Pazienti";
            // 
            // TextBoxNumeroMassimo
            // 
            this.TextBoxNumeroMassimo.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.TextBoxNumeroMassimo.Location = new System.Drawing.Point(293, 15);
            this.TextBoxNumeroMassimo.Name = "TextBoxNumeroMassimo";
            this.TextBoxNumeroMassimo.Size = new System.Drawing.Size(172, 35);
            this.TextBoxNumeroMassimo.TabIndex = 1;
            this.TextBoxNumeroMassimo.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.TextBoxNumeroMassimo.TextChanged += new System.EventHandler(this.TextBoxNumeroMassimo_TextChanged);
            // 
            // ButtonApriStudio
            // 
            this.ButtonApriStudio.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ButtonApriStudio.Location = new System.Drawing.Point(12, 59);
            this.ButtonApriStudio.Name = "ButtonApriStudio";
            this.ButtonApriStudio.Size = new System.Drawing.Size(453, 48);
            this.ButtonApriStudio.TabIndex = 1;
            this.ButtonApriStudio.Text = "APRI LO STUDIO MEDICO";
            this.ButtonApriStudio.UseVisualStyleBackColor = true;
            this.ButtonApriStudio.Click += new System.EventHandler(this.ButtonApriStudio_Click);
            // 
            // label2
            // 
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(6, 16);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(90, 55);
            this.label2.TabIndex = 3;
            this.label2.Text = "  Nome\r\nPaziente\r\n";
            // 
            // TextBoxNome
            // 
            this.TextBoxNome.Enabled = false;
            this.TextBoxNome.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.TextBoxNome.Location = new System.Drawing.Point(102, 19);
            this.TextBoxNome.Name = "TextBoxNome";
            this.TextBoxNome.Size = new System.Drawing.Size(345, 35);
            this.TextBoxNome.TabIndex = 4;
            this.TextBoxNome.TextChanged += new System.EventHandler(this.TextBoxNome_TextChanged);
            // 
            // ListBoxPazienti
            // 
            this.ListBoxPazienti.BackColor = System.Drawing.SystemColors.Info;
            this.ListBoxPazienti.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ListBoxPazienti.FormattingEnabled = true;
            this.ListBoxPazienti.ItemHeight = 20;
            this.ListBoxPazienti.Location = new System.Drawing.Point(12, 240);
            this.ListBoxPazienti.Name = "ListBoxPazienti";
            this.ListBoxPazienti.Size = new System.Drawing.Size(453, 224);
            this.ListBoxPazienti.TabIndex = 5;
            // 
            // ButtonChiudiStudio
            // 
            this.ButtonChiudiStudio.Enabled = false;
            this.ButtonChiudiStudio.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ButtonChiudiStudio.Location = new System.Drawing.Point(12, 471);
            this.ButtonChiudiStudio.Name = "ButtonChiudiStudio";
            this.ButtonChiudiStudio.Size = new System.Drawing.Size(453, 48);
            this.ButtonChiudiStudio.TabIndex = 4;
            this.ButtonChiudiStudio.Text = "CHIUDI LO STUDIO MEDICO";
            this.ButtonChiudiStudio.UseVisualStyleBackColor = true;
            this.ButtonChiudiStudio.Click += new System.EventHandler(this.ButtonChiudiStudio_Click);
            // 
            // ButtoneInserisci
            // 
            this.ButtoneInserisci.Enabled = false;
            this.ButtoneInserisci.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ButtoneInserisci.ForeColor = System.Drawing.Color.Black;
            this.ButtoneInserisci.Location = new System.Drawing.Point(6, 81);
            this.ButtoneInserisci.Name = "ButtoneInserisci";
            this.ButtoneInserisci.Size = new System.Drawing.Size(210, 34);
            this.ButtoneInserisci.TabIndex = 2;
            this.ButtoneInserisci.Text = "INSERISCI PAZIENTE";
            this.ButtoneInserisci.UseVisualStyleBackColor = true;
            this.ButtoneInserisci.Click += new System.EventHandler(this.ButtoneInserisci_Click);
            // 
            // ButtonProssimoPaziente
            // 
            this.ButtonProssimoPaziente.Enabled = false;
            this.ButtonProssimoPaziente.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ButtonProssimoPaziente.ForeColor = System.Drawing.Color.Black;
            this.ButtonProssimoPaziente.Location = new System.Drawing.Point(237, 81);
            this.ButtonProssimoPaziente.Name = "ButtonProssimoPaziente";
            this.ButtonProssimoPaziente.Size = new System.Drawing.Size(210, 34);
            this.ButtonProssimoPaziente.TabIndex = 3;
            this.ButtonProssimoPaziente.Text = "PROSSIMO PAZIENTE";
            this.ButtonProssimoPaziente.UseVisualStyleBackColor = true;
            this.ButtonProssimoPaziente.Click += new System.EventHandler(this.ButtonProssimoPaziente_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.ButtoneInserisci);
            this.groupBox1.Controls.Add(this.ButtonProssimoPaziente);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.TextBoxNome);
            this.groupBox1.Location = new System.Drawing.Point(12, 113);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(453, 121);
            this.groupBox1.TabIndex = 9;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Gestione Pazienti";
            // 
            // CodaStudioMedicoForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(477, 531);
            this.Controls.Add(this.ButtonChiudiStudio);
            this.Controls.Add(this.ListBoxPazienti);
            this.Controls.Add(this.ButtonApriStudio);
            this.Controls.Add(this.TextBoxNumeroMassimo);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.groupBox1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "CodaStudioMedicoForm";
            this.Text = "Coda Studio Medico";
            this.Load += new System.EventHandler(this.CodaStudioMedicoForm_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox TextBoxNumeroMassimo;
        private System.Windows.Forms.Button ButtonApriStudio;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox TextBoxNome;
        private System.Windows.Forms.ListBox ListBoxPazienti;
        private System.Windows.Forms.Button ButtonChiudiStudio;
        private System.Windows.Forms.Button ButtoneInserisci;
        private System.Windows.Forms.Button ButtonProssimoPaziente;
        private System.Windows.Forms.GroupBox groupBox1;
    }
}

