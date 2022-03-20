namespace SamuSaveFile
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
            this.buttonSalva = new System.Windows.Forms.Button();
            this.button_Carica = new System.Windows.Forms.Button();
            this.buttonModifica = new System.Windows.Forms.Button();
            this.buttonVisualizza = new System.Windows.Forms.Button();
            this.buttonExit = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.LabelNumero = new System.Windows.Forms.Label();
            this.Notepad = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // buttonSalva
            // 
            this.buttonSalva.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.buttonSalva.Font = new System.Drawing.Font("Arial", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.buttonSalva.Location = new System.Drawing.Point(476, 12);
            this.buttonSalva.Name = "buttonSalva";
            this.buttonSalva.Size = new System.Drawing.Size(133, 66);
            this.buttonSalva.TabIndex = 1;
            this.buttonSalva.Text = "Salva";
            this.buttonSalva.UseVisualStyleBackColor = true;
            this.buttonSalva.Click += new System.EventHandler(this.button1_Click);
            // 
            // button_Carica
            // 
            this.button_Carica.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.button_Carica.Font = new System.Drawing.Font("Arial", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_Carica.Location = new System.Drawing.Point(55, 12);
            this.button_Carica.Name = "button_Carica";
            this.button_Carica.Size = new System.Drawing.Size(135, 66);
            this.button_Carica.TabIndex = 2;
            this.button_Carica.Text = "Carica";
            this.button_Carica.UseVisualStyleBackColor = true;
            this.button_Carica.Click += new System.EventHandler(this.button_Carica_Click);
            // 
            // buttonModifica
            // 
            this.buttonModifica.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.buttonModifica.Font = new System.Drawing.Font("Arial", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.buttonModifica.ForeColor = System.Drawing.Color.LimeGreen;
            this.buttonModifica.Location = new System.Drawing.Point(196, 12);
            this.buttonModifica.Name = "buttonModifica";
            this.buttonModifica.Size = new System.Drawing.Size(135, 66);
            this.buttonModifica.TabIndex = 4;
            this.buttonModifica.Text = "Modifica";
            this.buttonModifica.UseVisualStyleBackColor = true;
            this.buttonModifica.Click += new System.EventHandler(this.buttonModifica_Click);
            // 
            // buttonVisualizza
            // 
            this.buttonVisualizza.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.buttonVisualizza.Font = new System.Drawing.Font("Arial", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.buttonVisualizza.Location = new System.Drawing.Point(337, 12);
            this.buttonVisualizza.Name = "buttonVisualizza";
            this.buttonVisualizza.Size = new System.Drawing.Size(133, 66);
            this.buttonVisualizza.TabIndex = 5;
            this.buttonVisualizza.Text = "Visualizza";
            this.buttonVisualizza.UseVisualStyleBackColor = true;
            this.buttonVisualizza.Click += new System.EventHandler(this.buttonVisualizza_Click);
            // 
            // buttonExit
            // 
            this.buttonExit.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.buttonExit.Font = new System.Drawing.Font("Arial", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.buttonExit.Location = new System.Drawing.Point(615, 12);
            this.buttonExit.Name = "buttonExit";
            this.buttonExit.Size = new System.Drawing.Size(133, 66);
            this.buttonExit.TabIndex = 6;
            this.buttonExit.Text = "Esci";
            this.buttonExit.UseVisualStyleBackColor = true;
            this.buttonExit.Click += new System.EventHandler(this.buttonExit_Click);
            // 
            // label1
            // 
            this.label1.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(192, 90);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(365, 28);
            this.label1.TabIndex = 7;
            this.label1.Text = "Numeri di righe caricate nella Matrice:";
            // 
            // LabelNumero
            // 
            this.LabelNumero.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.LabelNumero.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LabelNumero.Location = new System.Drawing.Point(552, 90);
            this.LabelNumero.Name = "LabelNumero";
            this.LabelNumero.Size = new System.Drawing.Size(36, 23);
            this.LabelNumero.TabIndex = 8;
            this.LabelNumero.Text = "0";
            this.LabelNumero.Click += new System.EventHandler(this.label2_Click);
            // 
            // Notepad
            // 
            this.Notepad.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.Notepad.Enabled = false;
            this.Notepad.Location = new System.Drawing.Point(12, 121);
            this.Notepad.Multiline = true;
            this.Notepad.Name = "Notepad";
            this.Notepad.Size = new System.Drawing.Size(776, 317);
            this.Notepad.TabIndex = 9;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.Notepad);
            this.Controls.Add(this.LabelNumero);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.buttonExit);
            this.Controls.Add(this.buttonVisualizza);
            this.Controls.Add(this.buttonModifica);
            this.Controls.Add(this.button_Carica);
            this.Controls.Add(this.buttonSalva);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Button buttonSalva;
        private System.Windows.Forms.Button button_Carica;
        private System.Windows.Forms.Button buttonModifica;
        private System.Windows.Forms.Button buttonVisualizza;
        private System.Windows.Forms.Button buttonExit;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label LabelNumero;
        private System.Windows.Forms.TextBox Notepad;
    }
}

