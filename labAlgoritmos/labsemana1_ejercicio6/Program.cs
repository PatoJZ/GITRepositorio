using System;

namespace labsemana1_ejercicio6
{
    class Program
    {
        static void Main(string[] args)
        {
            Persona jugador1 = new Persona();
            Console.WriteLine(jugador1.ToString());
            jugador1.Atacar();
            jugador1.Descansar();
            jugador1.CargarPoder();
        }
    }
}