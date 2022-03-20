namespace Alunni_Samu
{
    partial class Ciao
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Ciao));
            this.txtbx_nomeAlunno = new System.Windows.Forms.TextBox();
            this.btn_inserisci = new System.Windows.Forms.Button();
            this.lblalunno = new System.Windows.Forms.Label();
            this.listbx_ElencoAlunni = new System.Windows.Forms.ListBox();
            this.label1 = new System.Windows.Forms.Label();
            this.lbl3 = new System.Windows.Forms.Label();
            this.txtbx_TotAlunni = new System.Windows.Forms.TextBox();
            this.txtbx_IndiceAlunni = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.linkLabel1 = new System.Windows.Forms.LinkLabel();
            this.SuspendLayout();
            // 
            // txtbx_nomeAlunno
            // 
            this.txtbx_nomeAlunno.AcceptsReturn = true;
            this.txtbx_nomeAlunno.Font = new System.Drawing.Font("Microsoft Sans Serif", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtbx_nomeAlunno.Location = new System.Drawing.Point(215, 63);
            this.txtbx_nomeAlunno.Name = "txtbx_nomeAlunno";
            this.txtbx_nomeAlunno.Size = new System.Drawing.Size(340, 44);
            this.txtbx_nomeAlunno.TabIndex = 0;
            this.txtbx_nomeAlunno.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.txtbx_nomeAlunno.TextChanged += new System.EventHandler(this.txtbx_nomeAlunno_TextChanged);
            this.txtbx_nomeAlunno.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.InputKey);
            // 
            // btn_inserisci
            // 
            this.btn_inserisci.AllowDrop = true;
            this.btn_inserisci.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btn_inserisci.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_inserisci.ForeColor = System.Drawing.Color.LimeGreen;
            this.btn_inserisci.Location = new System.Drawing.Point(561, 63);
            this.btn_inserisci.Name = "btn_inserisci";
            this.btn_inserisci.Size = new System.Drawing.Size(185, 44);
            this.btn_inserisci.TabIndex = 1;
            this.btn_inserisci.Text = "INSERISCI";
            this.btn_inserisci.UseVisualStyleBackColor = true;
            this.btn_inserisci.Click += new System.EventHandler(this.btn_inserisci_Click);
            // 
            // lblalunno
            // 
            this.lblalunno.AutoSize = true;
            this.lblalunno.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblalunno.Location = new System.Drawing.Point(30, 70);
            this.lblalunno.Name = "lblalunno";
            this.lblalunno.Size = new System.Drawing.Size(179, 25);
            this.lblalunno.TabIndex = 2;
            this.lblalunno.Text = "NOME ALUNNO";
            // 
            // listbx_ElencoAlunni
            // 
            this.listbx_ElencoAlunni.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.listbx_ElencoAlunni.FormattingEnabled = true;
            this.listbx_ElencoAlunni.ItemHeight = 20;
            this.listbx_ElencoAlunni.Location = new System.Drawing.Point(18, 214);
            this.listbx_ElencoAlunni.Name = "listbx_ElencoAlunni";
            this.listbx_ElencoAlunni.Size = new System.Drawing.Size(472, 204);
            this.listbx_ElencoAlunni.TabIndex = 3;
            this.listbx_ElencoAlunni.SelectedIndexChanged += new System.EventHandler(this.listbx_ElencoAlunni_SelectedIndexChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(7, 186);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(193, 25);
            this.label1.TabIndex = 4;
            this.label1.Text = "ELENCO ALUNNI";
            // 
            // lbl3
            // 
            this.lbl3.AutoSize = true;
            this.lbl3.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl3.Location = new System.Drawing.Point(535, 247);
            this.lbl3.Name = "lbl3";
            this.lbl3.Size = new System.Drawing.Size(185, 31);
            this.lbl3.TabIndex = 5;
            this.lbl3.Text = "Totale Alunni";
            // 
            // txtbx_TotAlunni
            // 
            this.txtbx_TotAlunni.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.txtbx_TotAlunni.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.txtbx_TotAlunni.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtbx_TotAlunni.Location = new System.Drawing.Point(726, 247);
            this.txtbx_TotAlunni.Multiline = true;
            this.txtbx_TotAlunni.Name = "txtbx_TotAlunni";
            this.txtbx_TotAlunni.Size = new System.Drawing.Size(45, 31);
            this.txtbx_TotAlunni.TabIndex = 7;
            this.txtbx_TotAlunni.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.txtbx_TotAlunni.TextChanged += new System.EventHandler(this.txtbx_TotAlunni_TextChanged);
            // 
            // txtbx_IndiceAlunni
            // 
            this.txtbx_IndiceAlunni.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.txtbx_IndiceAlunni.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.txtbx_IndiceAlunni.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtbx_IndiceAlunni.Location = new System.Drawing.Point(726, 353);
            this.txtbx_IndiceAlunni.Multiline = true;
            this.txtbx_IndiceAlunni.Name = "txtbx_IndiceAlunni";
            this.txtbx_IndiceAlunni.Size = new System.Drawing.Size(45, 31);
            this.txtbx_IndiceAlunni.TabIndex = 8;
            this.txtbx_IndiceAlunni.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(535, 353);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(191, 31);
            this.label2.TabIndex = 6;
            this.label2.Text = "Indice Alunno";
            // 
            // groupBox1
            // 
            this.groupBox1.Location = new System.Drawing.Point(7, 29);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(781, 113);
            this.groupBox1.TabIndex = 9;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Inserimento";
            // 
            // groupBox2
            // 
            this.groupBox2.Location = new System.Drawing.Point(526, 214);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(262, 224);
            this.groupBox2.TabIndex = 10;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Contatori";
            // 
            // groupBox3
            // 
            this.groupBox3.Location = new System.Drawing.Point(7, 171);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(500, 267);
            this.groupBox3.TabIndex = 11;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Visualizzazione";
            // 
            // linkLabel1
            // 
            this.linkLabel1.ActiveLinkColor = System.Drawing.Color.Purple;
            this.linkLabel1.AutoSize = true;
            this.linkLabel1.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.linkLabel1.LinkBehavior = System.Windows.Forms.LinkBehavior.NeverUnderline;
            this.linkLabel1.LinkColor = System.Drawing.Color.Black;
            this.linkLabel1.Location = new System.Drawing.Point(583, 171);
            this.linkLabel1.Name = "linkLabel1";
            this.linkLabel1.Size = new System.Drawing.Size(143, 16);
            this.linkLabel1.TabIndex = 12;
            this.linkLabel1.TabStop = true;
            this.linkLabel1.Text = "by Samuele Stabile";
            this.linkLabel1.VisitedLinkColor = System.Drawing.Color.Black;
            this.linkLabel1.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabel1_LinkClicked_1);
            // 
            // Ciao
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.linkLabel1);
            this.Controls.Add(this.txtbx_IndiceAlunni);
            this.Controls.Add(this.txtbx_TotAlunni);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.lbl3);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.listbx_ElencoAlunni);
            this.Controls.Add(this.lblalunno);
            this.Controls.Add(this.btn_inserisci);
            this.Controls.Add(this.txtbx_nomeAlunno);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox3);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Ciao";
            this.Text = "Ok Boomer";
            this.Load += new System.EventHandler(this.Ciao_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtbx_nomeAlunno;
        private System.Windows.Forms.Label lblalunno;
        private System.Windows.Forms.ListBox listbx_ElencoAlunni;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btn_inserisci;
        private System.Windows.Forms.Label lbl3;
        private System.Windows.Forms.TextBox txtbx_TotAlunni;
        private System.Windows.Forms.TextBox txtbx_IndiceAlunni;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.LinkLabel linkLabel1;
    }
}

