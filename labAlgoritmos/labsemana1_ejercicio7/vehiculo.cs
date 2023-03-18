using System;

namespace labsemana1_ejercicio7{

    class Vehiculo {
        private string _Fabricante; 
        private string _Modelo; 
        private int _Anio; 
        private double _PorcentajeVelocidad; 
        private double _PorcentajeManiobrabilidad; 

        public string Fabricante { get{return _Fabricante;} set{_Fabricante = value;}}
        public string Modelo { get{return _Modelo;} set{_Modelo = value;}}
        public int Anio { get{return _Anio;} set{_Anio = value;}}
        public double PorcentajeVelocidad { get{return _PorcentajeVelocidad;} set{_PorcentajeManiobrabilidad = value;}}
        public double PorcentajeManiobrabilidad { get{return _PorcentajeManiobrabilidad;} set{_PorcentajeManiobrabilidad = value;}}

        
        //Métodos
        public Vehiculo(string Fabricante, string Modelo, int Anio, double PorcentajeVelocidad,double PorcentajeManiobrabilidad){
            this._Fabricante = Fabricante;
            this._Modelo = Modelo;
            this._Anio = Anio;
            this._PorcentajeVelocidad = PorcentajeVelocidad;
            this.PorcentajeManiobrabilidad = PorcentajeManiobrabilidad;
        }
        public override string ToString(){
            return "Fabricante: " + this._Fabricante + "\nModelo: " + this._Modelo + "\nAnio: " + this._Anio + "\nPorcentajeVelocidad: " + this._PorcentajeVelocidad + "\nPorcentajeManiobrabilidad: " + this.PorcentajeManiobrabilidad;
        }
        public void Acelerar() {
            Console.WriteLine($"El {Fabricante} {Modelo} está acelerando...");
    
        }

        public void Frenar() {
            Console.WriteLine($"El {Fabricante} {Modelo} está frenando...");
            
        }

        public void Girar(string direccion) {
            Console.WriteLine($"El {Fabricante} {Modelo} está girando hacia {direccion}...");
        
        }
    }
}