using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Messaging;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Message = System.Messaging.Message;

namespace MessageQueen
{
    public partial class Form1 : Form
    {
        private int _j = 0;
        MessageQueue _mqQueue;
        public Form1()
        {
            InitializeComponent();
            _mqQueue = MessageQueue.Exists(@".\Private$\MyQueue") ? new MessageQueue(@".\Private$\MyQueue") : MessageQueue.Create(@".\Private$\MyQueue");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            var mm = new Message
            {
                Body = textBox1.Text,
                Label = "Msg" + _j.ToString()
            };
            _j++;
            _mqQueue.Send(mm);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            string m = string.Empty;
            try
            {
                var mes = _mqQueue.Receive(new TimeSpan(0, 0, 3));
                if (mes != null)
                {
                    mes.Formatter = new XmlMessageFormatter(
                        new String[] { "System.String,mscorlib" });
                    m = mes.Body.ToString();
                }
            }
            catch
            {
                m = "No Message";
            }
            textBox2.Text = m;
        }
    }
}
