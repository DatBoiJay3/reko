﻿namespace Reko.Gui.Windows.Controls
{
    partial class LowLevelView
    {
        /// <summary> 
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(LowLevelView));
            Reko.Gui.Windows.Controls.EmptyEditorModel emptyEditorModel1 = new Reko.Gui.Windows.Controls.EmptyEditorModel();
            this.toolStrip = new System.Windows.Forms.ToolStrip();
            this.btnBack = new System.Windows.Forms.ToolStripButton();
            this.btnForward = new System.Windows.Forms.ToolStripButton();
            this.toolStripLabel1 = new System.Windows.Forms.ToolStripLabel();
            this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.txtAddress = new System.Windows.Forms.ToolStripTextBox();
            this.btnGo = new System.Windows.Forms.ToolStripButton();
            this.lowLeveImages = new System.Windows.Forms.ImageList(this.components);
            this.splitContainer2 = new System.Windows.Forms.SplitContainer();
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.lblMemoryView = new System.Windows.Forms.Label();
            this.lblDisassembly = new System.Windows.Forms.Label();
            this.memCtrl = new Reko.Gui.Windows.Controls.MemoryControl();
            this.dasmCtrl = new Reko.Gui.Windows.Controls.DisassemblyControl();
            this.byteMapView = new Reko.Gui.Windows.Controls.ByteMapView();
            this.imageMapControl1 = new Reko.Gui.Windows.Controls.ImageMapView();
            this.label1 = new System.Windows.Forms.Label();
            this.toolStrip.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer2)).BeginInit();
            this.splitContainer2.Panel1.SuspendLayout();
            this.splitContainer2.Panel2.SuspendLayout();
            this.splitContainer2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).BeginInit();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            this.SuspendLayout();
            // 
            // toolStrip
            // 
            this.toolStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.btnBack,
            this.btnForward,
            this.toolStripLabel1,
            this.toolStripSeparator1,
            this.txtAddress,
            this.btnGo});
            this.toolStrip.Location = new System.Drawing.Point(0, 23);
            this.toolStrip.Name = "toolStrip";
            this.toolStrip.Size = new System.Drawing.Size(858, 25);
            this.toolStrip.TabIndex = 3;
            this.toolStrip.Text = "toolStrip1";
            // 
            // btnBack
            // 
            this.btnBack.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnBack.Image = global::Reko.Gui.Resources.Back;
            this.btnBack.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnBack.Name = "btnBack";
            this.btnBack.Size = new System.Drawing.Size(23, 22);
            this.btnBack.Text = "Back";
            // 
            // btnForward
            // 
            this.btnForward.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnForward.Image = global::Reko.Gui.Resources.Forward;
            this.btnForward.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnForward.Name = "btnForward";
            this.btnForward.Size = new System.Drawing.Size(23, 22);
            this.btnForward.Text = "Forward";
            // 
            // toolStripLabel1
            // 
            this.toolStripLabel1.Name = "toolStripLabel1";
            this.toolStripLabel1.Size = new System.Drawing.Size(49, 22);
            this.toolStripLabel1.Text = "Address";
            // 
            // toolStripSeparator1
            // 
            this.toolStripSeparator1.Name = "toolStripSeparator1";
            this.toolStripSeparator1.Size = new System.Drawing.Size(6, 25);
            // 
            // txtAddress
            // 
            this.txtAddress.Name = "txtAddress";
            this.txtAddress.Size = new System.Drawing.Size(100, 25);
            // 
            // btnGo
            // 
            this.btnGo.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text;
            this.btnGo.Image = ((System.Drawing.Image)(resources.GetObject("btnGo.Image")));
            this.btnGo.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnGo.Name = "btnGo";
            this.btnGo.Size = new System.Drawing.Size(26, 22);
            this.btnGo.Text = "Go";
            // 
            // lowLeveImages
            // 
            this.lowLeveImages.ColorDepth = System.Windows.Forms.ColorDepth.Depth8Bit;
            this.lowLeveImages.ImageSize = new System.Drawing.Size(16, 16);
            this.lowLeveImages.TransparentColor = System.Drawing.Color.Transparent;
            // 
            // splitContainer2
            // 
            this.splitContainer2.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer2.Location = new System.Drawing.Point(0, 48);
            this.splitContainer2.Name = "splitContainer2";
            // 
            // splitContainer2.Panel1
            // 
            this.splitContainer2.Panel1.Controls.Add(this.splitContainer1);
            // 
            // splitContainer2.Panel2
            // 
            this.splitContainer2.Panel2.Controls.Add(this.byteMapView);
            this.splitContainer2.Panel2.Controls.Add(this.label1);
            this.splitContainer2.Size = new System.Drawing.Size(858, 433);
            this.splitContainer2.SplitterDistance = 692;
            this.splitContainer2.TabIndex = 5;
            // 
            // splitContainer1
            // 
            this.splitContainer1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer1.Location = new System.Drawing.Point(0, 0);
            this.splitContainer1.Name = "splitContainer1";
            this.splitContainer1.Orientation = System.Windows.Forms.Orientation.Horizontal;
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.Controls.Add(this.memCtrl);
            this.splitContainer1.Panel1.Controls.Add(this.lblMemoryView);
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.dasmCtrl);
            this.splitContainer1.Panel2.Controls.Add(this.lblDisassembly);
            this.splitContainer1.Size = new System.Drawing.Size(692, 433);
            this.splitContainer1.SplitterDistance = 255;
            this.splitContainer1.TabIndex = 1;
            // 
            // lblMemoryView
            // 
            this.lblMemoryView.BackColor = System.Drawing.SystemColors.InactiveCaption;
            this.lblMemoryView.Dock = System.Windows.Forms.DockStyle.Top;
            this.lblMemoryView.Font = new System.Drawing.Font("Tahoma", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblMemoryView.ForeColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.lblMemoryView.Location = new System.Drawing.Point(0, 0);
            this.lblMemoryView.Name = "lblMemoryView";
            this.lblMemoryView.Size = new System.Drawing.Size(692, 18);
            this.lblMemoryView.TabIndex = 1;
            this.lblMemoryView.Text = "Memory View";
            this.lblMemoryView.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // lblDisassembly
            // 
            this.lblDisassembly.BackColor = System.Drawing.SystemColors.InactiveCaption;
            this.lblDisassembly.Dock = System.Windows.Forms.DockStyle.Top;
            this.lblDisassembly.Font = new System.Drawing.Font("Tahoma", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblDisassembly.ForeColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.lblDisassembly.Location = new System.Drawing.Point(0, 0);
            this.lblDisassembly.Margin = new System.Windows.Forms.Padding(3, 0, 3, 3);
            this.lblDisassembly.Name = "lblDisassembly";
            this.lblDisassembly.Size = new System.Drawing.Size(692, 18);
            this.lblDisassembly.TabIndex = 1;
            this.lblDisassembly.Text = "Disassembly";
            this.lblDisassembly.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // memCtrl
            // 
            this.memCtrl.Architecture = null;
            this.memCtrl.BytesPerRow = ((uint)(16u));
            this.memCtrl.Dock = System.Windows.Forms.DockStyle.Fill;
            this.memCtrl.ImageMap = null;
            this.memCtrl.Location = new System.Drawing.Point(0, 18);
            this.memCtrl.Name = "memCtrl";
            this.memCtrl.SelectedAddress = null;
            this.memCtrl.Services = null;
            this.memCtrl.Size = new System.Drawing.Size(692, 237);
            this.memCtrl.TabIndex = 0;
            this.memCtrl.Text = "memoryControl1";
            this.memCtrl.TopAddress = null;
            this.memCtrl.WordSize = ((uint)(1u));
            // 
            // dasmCtrl
            // 
            this.dasmCtrl.BackColor = System.Drawing.SystemColors.Window;
            this.dasmCtrl.Dock = System.Windows.Forms.DockStyle.Fill;
            this.dasmCtrl.Location = new System.Drawing.Point(0, 18);
            this.dasmCtrl.Model = emptyEditorModel1;
            this.dasmCtrl.Name = "dasmCtrl";
            this.dasmCtrl.Program = null;
            this.dasmCtrl.SelectedObject = null;
            this.dasmCtrl.Services = null;
            this.dasmCtrl.Size = new System.Drawing.Size(692, 156);
            this.dasmCtrl.StartAddress = null;
            this.dasmCtrl.StyleClass = null;
            this.dasmCtrl.TabIndex = 0;
            this.dasmCtrl.Text = "disassemblyControl1";
            this.dasmCtrl.TopAddress = null;
            // 
            // byteMapView
            // 
            this.byteMapView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.byteMapView.SegmentMap = null;
            this.byteMapView.Location = new System.Drawing.Point(0, 18);
            this.byteMapView.Name = "byteMapView";
            this.byteMapView.Size = new System.Drawing.Size(162, 415);
            this.byteMapView.TabIndex = 0;
            this.byteMapView.Text = "byteMapView1";
            // 
            // imageMapControl1
            // 
            this.imageMapControl1.BackColor = System.Drawing.SystemColors.Control;
            this.imageMapControl1.Dock = System.Windows.Forms.DockStyle.Top;
            this.imageMapControl1.Granularity = ((long)(1));
            this.imageMapControl1.ImageMap = null;
            this.imageMapControl1.Location = new System.Drawing.Point(0, 0);
            this.imageMapControl1.Name = "imageMapControl1";
            this.imageMapControl1.Offset = ((long)(0));
            this.imageMapControl1.SelectedAddress = null;
            this.imageMapControl1.Size = new System.Drawing.Size(858, 23);
            this.imageMapControl1.TabIndex = 4;
            this.imageMapControl1.Text = "imageMapControl1";
            // 
            // label1
            // 
            this.label1.BackColor = System.Drawing.SystemColors.InactiveCaption;
            this.label1.Dock = System.Windows.Forms.DockStyle.Top;
            this.label1.Font = new System.Drawing.Font("Tahoma", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.label1.Location = new System.Drawing.Point(0, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(162, 18);
            this.label1.TabIndex = 2;
            this.label1.Text = "Byte Map";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // LowLevelView
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.splitContainer2);
            this.Controls.Add(this.toolStrip);
            this.Controls.Add(this.imageMapControl1);
            this.Name = "LowLevelView";
            this.Size = new System.Drawing.Size(858, 481);
            this.toolStrip.ResumeLayout(false);
            this.toolStrip.PerformLayout();
            this.splitContainer2.Panel1.ResumeLayout(false);
            this.splitContainer2.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer2)).EndInit();
            this.splitContainer2.ResumeLayout(false);
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).EndInit();
            this.splitContainer1.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.ToolStrip toolStrip;
        private System.Windows.Forms.ToolStripButton btnBack;
        private System.Windows.Forms.ToolStripButton btnForward;
        private System.Windows.Forms.ToolStripLabel toolStripLabel1;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator1;
        private System.Windows.Forms.ToolStripTextBox txtAddress;
        private System.Windows.Forms.ImageList lowLeveImages;
        private System.Windows.Forms.ToolStripButton btnGo;
        private ImageMapView imageMapControl1;
        private System.Windows.Forms.SplitContainer splitContainer2;
        private System.Windows.Forms.SplitContainer splitContainer1;
        private MemoryControl memCtrl;
        private System.Windows.Forms.Label lblMemoryView;
        private DisassemblyControl dasmCtrl;
        private System.Windows.Forms.Label lblDisassembly;
        private ByteMapView byteMapView;
        private System.Windows.Forms.Label label1;
    }
}
