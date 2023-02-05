using System;
using System.Collections.Generic;

namespace ConsoleApplication1
{
    public class 명예의_전당__1_
    {
        // static void Main()
        // {
        //     var answer = solution(3, new [] { 10, 100, 20, 150, 1, 100, 200 });
        //     foreach (var a in answer)
        //     {
        //         Console.Write(a + " ");
        //     }
        // }

        public static int[] solution(int k, int[] score) 
        {
            int[] answer = new int[score.Length];
            List<int> rank = new List<int>();
            for (int i = 0; i < score.Length; i++)
            {
                if (rank.Count < k)
                {
                    rank.Add(score[i]);
                }
                else
                {
                    if (rank[0] < score[i])
                    {
                        rank[0] = score[i];
                    }
                }
                rank.Sort();
                answer[i] = rank[0];
            }
            return answer;
        }
    }
}