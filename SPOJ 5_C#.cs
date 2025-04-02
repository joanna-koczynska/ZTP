using System;

namespace Project
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string T_str, N_str;
            int T, N, zeroCounter = 0;

            T_str = Console.ReadLine();
            T=Convert.ToInt32(T_str);
         

            for (int i = 0; i < T; i++)
            {
               N_str = Console.ReadLine();
            N=Convert.ToInt32(N_str);

                while (N >= 5)
                {
                    N /= 5;
                    zeroCounter += N;
                }
                Console.WriteLine(zeroCounter);
                zeroCounter=0;
            }
        }
    }
}