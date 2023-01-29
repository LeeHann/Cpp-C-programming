using System;

namespace ConsoleApplication1
{
    public class 크기가_작은_부분_문자열
    {
        // static void Main()
        // {
        //     Console.WriteLine(Solution("10203", "15"));
        // }

        static int Solution(string t, string p) 
        {
            var answer = 0;
            long.TryParse(p, out long pInt);
            for (int index = 0; index <= t.Length - p.Length; index++)
            {
                long.TryParse(t.Substring(index, p.Length), out long value);
                if (value <= pInt) answer++;
            }
            return answer;
        }
    }
}