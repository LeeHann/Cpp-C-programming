using System;

namespace ConsoleApplication1
{
    public class 과일_장수
    {
        // static void Main()
        // {
        //     Console.WriteLine(solution(3, 4, new int[] {1, 2, 3, 1, 2, 3, 1}));
        // }
        
        public static int solution(int k, int m, int[] score) {
            int maxValue = 0;
            int index = score.Length - 1;
            Array.Sort(score);
            while (index - m + 1 >= 0)
            {
                maxValue += m * score[index - m + 1];
                index -= m;
            }
            return maxValue;
        }
    }
}