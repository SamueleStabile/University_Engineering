namespace Somma_2_numeri_Samu
{
    partial class Forma_Gino
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
            this.lblNum1 = new System.Windows.Forms.Label();
            this.lblNum2 = new System.Windows.Forms.Label();
            this.txtNum1 = new System.Windows.Forms.TextBox();
            this.txtNum2 = new System.Windows.Forms.TextBox();
            this.Result = new System.Windows.Forms.Label();
            this.btn_plus = new System.Windows.Forms.Button();
            this.btn_less = new System.Windows.Forms.Button();
            this.btn_divide = new System.Windows.Forms.Button();
            this.btn_per = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lblNum1
            // 
            this.lblNum1.AutoSize = true;
            this.lblNum1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblNum1.Location = new System.Drawing.Point(116, 105);
            this.lblNum1.Name = "lblNum1";
            this.lblNum1.Size = new System.Drawing.Size(160, 25);
            this.lblNum1.TabIndex = 0;
            this.lblNum1.Text = "Primo Numero";
            this.lblNum1.Click += new System.EventHandler(this.lblNum1_Click);
            // 
            // lblNum2
            // 
            this.lblNum2.AutoSize = true;
            this.lblNum2.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblNum2.Location = new System.Drawing.Point(116, 150);
            this.lblNum2.Name = "lblNum2";
            this.lblNum2.Size = new System.Drawing.Size(192, 25);
            this.lblNum2.TabIndex = 1;
            this.lblNum2.Text = "Secondo Numero";
            this.lblNum2.Click += new System.EventHandler(this.lblNum2_Click);
            // 
            // txtNum1
            // 
            this.txtNum1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtNum1.Location = new System.Drawing.Point(347, 105);
            this.txtNum1.Name = "txtNum1";
            this.txtNum1.Size = new System.Drawing.Size(174, 31);
            this.txtNum1.TabIndex = 2;
            this.txtNum1.TextChanged += new System.EventHandler(this.txtNum1_TextChanged);
            // 
            // txtNum2
            // 
            this.txtNum2.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtNum2.Location = new System.Drawing.Point(347, 150);
            this.txtNum2.Name = "txtNum2";
            this.txtNum2.Size = new System.Drawing.Size(174, 31);
            this.txtNum2.TabIndex = 3;
            this.txtNum2.TextChanged += new System.EventHandler(this.txtNum2_TextChanged);
            // 
            // Result
            // 
            this.Result.BackColor = System.Drawing.Color.LemonChiffon;
            this.Result.Font = new System.Drawing.Font("Microsoft Sans Serif", 26.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Result.ForeColor = System.Drawing.Color.Red;
            this.Result.Location = new System.Drawing.Point(347, 252);
            this.Result.Name = "Result";
            this.Result.Size = new System.Drawing.Size(174, 61);
            this.Result.TabIndex = 5;
            this.Result.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Result.Click += new System.EventHandler(this.Result_Click);
            // 
            // btn_plus
            // 
            this.btn_plus.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_plus.Location = new System.Drawing.Point(347, 200);
            this.btn_plus.Name = "btn_plus";
            this.btn_plus.Size = new System.Drawing.Size(39, 37);
            this.btn_plus.TabIndex = 6;
            this.btn_plus.Text = "+";
            this.btn_plus.UseVisualStyleBackColor = true;
            this.btn_plus.Click += new System.EventHandler(this.btn_plus_Click);
            // 
            // btn_less
            // 
            this.btn_less.Font = new System.Drawing.Font("Microsoft Sans Serif", 21.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_less.Location = new System.Drawing.Point(392, 200);
            this.btn_less.Name = "btn_less";
            this.btn_less.Size = new System.Drawing.Size(39, 37);
            this.btn_less.TabIndex = 7;
            this.btn_less.Text = "-";
            this.btn_less.UseVisualStyleBackColor = true;
            this.btn_less.Click += new System.EventHandler(this.btn_less_Click);
            // 
            // btn_divide
            // 
            this.btn_divide.Font = new System.Drawing.Font("Microsoft Sans Serif", 21.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_divide.Location = new System.Drawing.Point(437, 200);
            this.btn_divide.Name = "btn_divide";
            this.btn_divide.Size = new System.Drawing.Size(39, 37);
            this.btn_divide.TabIndex = 8;
            this.btn_divide.Text = "/";
            this.btn_divide.UseVisualStyleBackColor = true;
            this.btn_divide.Click += new System.EventHandler(this.btn_divide_Click);
            // 
            // btn_per
            // 
            this.btn_per.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.btn_per.Font = new System.Drawing.Font("Microsoft Sans Serif", 21.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn_per.Location = new System.Drawing.Point(482, 200);
            this.btn_per.Name = "btn_per";
            this.btn_per.Size = new System.Drawing.Size(39, 37);
            this.btn_per.TabIndex = 9;
            this.btn_per.Text = "x";
            this.btn_per.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            this.btn_per.UseVisualStyleBackColor = true;
            this.btn_per.Click += new System.EventHandler(this.btn_per_Click);
            // 
            // Forma_Gino
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btn_per);
            this.Controls.Add(this.btn_divide);
            this.Controls.Add(this.btn_less);
            this.Controls.Add(this.btn_plus);
            this.Controls.Add(this.Result);
            this.Controls.Add(this.txtNum2);
            this.Controls.Add(this.txtNum1);
            this.Controls.Add(this.lblNum2);
            this.Controls.Add(this.lblNum1);
            this.Name = "Forma_Gino";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblNum1;
        private System.Windows.Forms.Label lblNum2;
        private System.Windows.Forms.TextBox txtNum1;
        private System.Windows.Forms.TextBox txtNum2;
        private System.Windows.Forms.Label Result;
        private System.Windows.Forms.Button btn_plus;
        private System.Windows.Forms.Button btn_less;
        private System.Windows.Forms.Button btn_divide;
        private System.Windows.Forms.Button btn_per;
    }
}

