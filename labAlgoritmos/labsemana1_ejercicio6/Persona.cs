using System;

namespace labsemana1_ejercicio6 {
    
    class Persona {
        private string _Tipo; 
        private string _Nombre;
        private int _Vida;
        private int _Poder;
        private int _Velocidad;

        
        // Propiedades
        public string Tipo { get{return this._Tipo;} set{this._Tipo = value;}}
        public string Nombre { get{return this._Nombre;} set{this._Nombre = value;}}
        public int Vida { get{return this._Vida;} set{this._Vida = value;}}
        public int Poder { get{return this._Poder;} set{this._Poder = value;}}
        public int Velocidad { get{return this._Velocidad;} set{this._Velocidad=value;}}


        // Métodos
        public Persona(){
            this._Nombre = "Gandalf";
            this._Vida = 100;
            this._Tipo = "Mago";
            this._Poder = 100;
            this._Velocidad = 50;

        }
        public override string ToString(){
            return "Nombre:" + this._Nombre + " Vida:" +this._Vida + " Poder:" + this._Poder + " Velocidad:" + this._Velocidad;
        }
        public void Descansar() {
            Console.WriteLine($"{Nombre} está descansando...");
        }

        public void Atacar() {
            Console.WriteLine($"{Nombre} está atacando");
        
        }
        public void CargarPoder(){
            Console.WriteLine($"{Nombre} está cargando su poder...");
        }
        
    }
}