using System;
using System.Collections.Generic;
using System.Linq;

namespace ConsoleApplication1
{
    public class 체육복
    {
        // static void Main()
        // {
        //     Console.WriteLine(solution
        //         (
        //             3, 
        //             new int[]{1,2,3}, 
        //             new int []{1,2,3}
        //         )
        //     );
        // }

        public static int solution(int n, int[] lost, int[] reserve) {
            int answer = n;
            Array.Sort(lost);
            Array.Sort(reserve);
            List<int> _lost = lost.ToList();
            List<int> _reserve = reserve.ToList();
            for(int i = 0; i < _lost.Count; i++)
            {
                if (_reserve.Contains(_lost[i]))
                {
                    _reserve.Remove(_lost[i]);
                    _lost.Remove(_lost[i]);
                    i--;
                }
            }
            foreach (var item in _lost)
            {
                if (item == -1) continue;
                if (_reserve.Contains(item - 1))
                {
                    _reserve.Remove(item - 1);
                }
                else if (_reserve.Contains(item + 1))
                {
                    _reserve.Remove(item + 1);
                }
                else
                {
                    answer--;
                }
            }
            return answer;
        }
    }
}