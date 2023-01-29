using System;
using System.Linq;

namespace ConsoleApplication1
{
    public class 푸드_파이트_대회
    {
        // static void Main()
        // {
        //     Console.WriteLine(Solution(new int []{ 1, 3, 4, 6 }));
        // }
        
        public static string Solution(int[] food) 
        {
            string answer = "";
            for (int index = 1; index < food.Length; index++)
            {
                answer += new string((char)(index+'0'), food[index] / 2);
            }
            string reverse = new string(answer.Reverse().ToArray());
            answer += "0";
            answer += reverse;
            return answer;
        }
    }
}