# Algorithm

📁 Baekjoon  : 백준 알고리즘 문제 풀이    
📁 Programmers : 프로그래머스 문제 풀이 WITH SQL        
📁 codeforces : 코드포스 문제 풀이          
📁 study : 기타 코딩 공부    
  
📝 0_skeleton.cpp : c++ 기본 세팅 상태

### 💻 vscode 에서 알고리즘 문제 풀기 (c, cpp 한정)
1. MinGW 설치 (https://sourceforge.net/projects/mingw/) - window 기준

1.1 MinGW 설치 과정에서 gcc 컴파일러 설치    
1.2 환경변수 설정    
	환경변수 path 편집 / MinGW\bin 경로 추가

2. vscode 내 구성 편집

2.1 vscode 상위 메뉴 중 디버그(혹은 실행)탭에서 구성열기에서 c_cpp_properties.json 파일 편집

<pre><code>
{ 
	"configurations": [
		{ 
			"name": "Win32", 
			"includePath": [
				"${workspaceFolder}/**" 
			], 
			"defines": [ 
				"_DEBUG", 
				"UNICODE", 
				"_UNICODE" 
			], 
			"compilerPath": "C:/MinGW/bin/g++.exe", 
			"cStandard": "c17", 
			"cppStandard": "c++17", 
			"intelliSenseMode": "clang-x64" 
		} 
	], 
	"version": 4 
}
</code></pre>

2.2 플러그인 중 C/C++, Code Runner 설치

2.3 ctrl + , 하면 vscode 설정으로 들어가지는데 거기서 settings.json을 찾아 다음을 추가
<pre><code>
"code-runner.executorMap": {
        "c": "cd $dirWithoutTrailingSlash && gcc -Wall -Werror -Wextra $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe", 
        // input.txt로 바로 입력. 
        "cpp": "cd $dirWithoutTrailingSlash && g++ $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe < input.txt", 
        // 직접 실행후 입력할때. 
        //"cpp": "cd $dirWithoutTrailingSlash && g++ $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe", 
    }, 
</code></pre>
"c" 부분의 컴파일 옵션은 필요에 따라 변경
