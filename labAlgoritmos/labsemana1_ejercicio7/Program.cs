using System;

namespace labsemana1_ejercicio7
{
    class Program
    {
        static void Main(string[] args)
        {
            Vehiculo vehiculo1 = new Vehiculo("Ford", "Mustang", 1967, 90.0, 60.0);
            Vehiculo vehiculo2 = new Vehiculo("Toyota", "Corolla", 2020, 80.0, 70.0);
            Vehiculo vehiculo3 = new Vehiculo("Nissan", "V16", 2008, 60.0, 70.0);

            Console.WriteLine(vehiculo1.ToString());
            vehiculo1.Acelerar();
            Console.WriteLine("\n");
            Console.WriteLine(vehiculo2.ToString());
            vehiculo2.Frenar();
            Console.WriteLine("\n");
            Console.WriteLine(vehiculo3.ToString());
            vehiculo3.Girar("Derecha");
        }
    }
}
