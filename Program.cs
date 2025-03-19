using System;

public class Project
{
    static int intReverse(int x)
    {
        int temp, newInt = 0;
        while (x!=0)
        {
            temp = x % 10;
            newInt = newInt * 10 + temp;
            x/=10;
        }
        return newInt;
    }
    public static void Main(string[] args)
    {
        int n, space, sum;
        string n_input, l;

        n_input = Console.ReadLine();
        n = Convert.ToInt32(n_input);

        for (int i = 0; i < n; i++)
        {
            l = Console.ReadLine();

            space = l.IndexOf(" ");

            int r1 = int.Parse(l.Substring(0, space));
            int r2 = int.Parse(l.Substring(space + 1));

            sum = intReverse(r1) + intReverse(r2);

            Console.WriteLine(intReverse(sum));


        }
    }
}