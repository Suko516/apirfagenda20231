using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Ingresa el primer número: ");
        int num1 = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Ingresa el segundo número: ");
        int num2 = Convert.ToInt32(Console.ReadLine());

        int suma = num1 + num2;
        int resta = num1 - num2;

        Console.WriteLine("La suma de {0} y {1} es: {2}", num1, num2, suma);
        Console.WriteLine("La resta de {0} y {1} es: {2}", num1, num2, resta);
    }
}