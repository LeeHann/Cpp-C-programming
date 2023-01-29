using System;

namespace ConsoleApplication1
{
    public class 가장_가까운_같은_글자
    {
        // static void Main()
        // {
        //     int[] answer = solution("foobar");
        //     foreach (var VARIABLE in answer)
        //     {
        //         Console.WriteLine(VARIABLE);
        //     }
        // }
        
        public static int[] solution(string s) {
            int[] answer = new int[s.Length];
            for (int index = 0; index < s.Length; index++)
            {
                int pos = s.Substring(0, index).LastIndexOf(s[index]);
                answer[index] = pos != -1 ? index - pos : -1;
            }
            return answer;
        }
    }
}