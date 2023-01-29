#include <stdio.h>

/*
<구현할 형식 지정자>
c     : 문자 하나 출력
s     : 문자열 출력
p     : 포인터 주소 출력
d & i : 부호 있는 십진법 정수 출력
u     : 부호 없는 십진법 정수 출력
x     : 부호없는 16진법 정수 출력 (소문자 사용)
X     : 부호없는 16진법 정수 출력 (대문자 사용) 
%     : % 문자 출력


<flag별 영향주는 형식지정자>
# : x, X
' ' : d, i
+ : d, i
- : d, i
*.* : d, i, u, x, X, c(width만 적용)
*/

int main()
{
    int num0 = 0;
    int num1 = +1;
    int num2 = -1;
    int num3 = 2147483647;
    int num4 = -2147483648;
    int num5 = 1234;
    int num6 = -1234;
    char chr = 'a';
    char* str = "test_printf";

    printf("--------<case %%d, 0>--------\n");
    printf("single  %%d : |%d|\n", num0);
    printf("with flag +  %%+d : |%+d|\n", num0);
    printf("with flag -  %%-d : |%-d|\n", num0);
    printf("with flag -+  %%+-d : |%-+d|\n", num0);
    printf("with flag +-  %%+-d : |%+-d|\n", num0);
    printf("with flag ' '  %% d : |% d|\n", num0);
    printf("with flag ' '+  %% +d : |% +d|\n", num0);
    printf("with flag ' '-  %% -d : |% -d|\n", num0);
    printf("with flag ' '-+  %% -+d : |% -+d|\n", num0);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num0);
    printf("with flag ' '-+  %% ++d : |% -+d|\n", num0);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num0);
    printf("with flag +' '  %%+ d : |%+ d|\n", num0);
    printf("with flag -' '  %%- d : |%- d|\n", num0);
    printf("with flag -+' '  %%-+ d : |%-+ d|\n", num0);
    printf("with flag +-' '  %%+- d : |%+- d|\n", num0);
    printf("with flag -+' '  %%++ d : |%-+ d|\n", num0);
    printf("with flag +-' '  %%-- d : |%+- d|\n", num0);
    //# is no effect to %d printf("with flag #  %%#d : |%#d|\n", num0);
    printf("with width -1  %%-1d : |%-1d|\n", num0);
    printf("with precision -1  %%-.1d : |%-.1d|\n", num0);
    /*음수 width는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with width 0  %%0d : |%0d|\n", num0);
    printf("with precision 0  %%.0d : |%.0d|\n", num0);
    printf("with width 0 & precision 0  %%0.0d : |%0.0d|\n", num0);
    printf("with width 1  %%1d : |%1d|\n", num0);
    printf("with precision 1  %%.1d : |%.1d|\n", num0);
    printf("with width 1 & precision 1  %%1.1d : |%1.1d|\n", num0);
    printf("with width 7  %%7d : |%7d|\n", num0);
    printf("with precision 5  %%.5d : |%.5d|\n", num0);
    printf("with width 7 & precision 5  %%7.5d : |%7.5d|\n", num0);

    printf("--------<case %%d, +1>--------\n");
    printf("single  %%d : |%d|\n", num1);
    printf("with flag +  %%+d : |%+d|\n", num1);
    printf("with flag -  %%-d : |%-d|\n", num1);
    printf("with flag -+  %%+-d : |%-+d|\n", num1);
    printf("with flag +-  %%+-d : |%+-d|\n", num1);
    printf("with flag ' '  %% d : |% d|\n", num1);
    printf("with flag ' '+  %% +d : |% +d|\n", num1);
    printf("with flag ' '-  %% -d : |% -d|\n", num1);
    printf("with flag ' '-+  %% -+d : |% -+d|\n", num1);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num1);
    printf("with flag ' '-+  %% ++d : |% -+d|\n", num1);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num1);
    printf("with flag +' '  %%+ d : |%+ d|\n", num1);
    printf("with flag -' '  %%- d : |%- d|\n", num1);
    printf("with flag -+' '  %%-+ d : |%-+ d|\n", num1);
    printf("with flag +-' '  %%+- d : |%+- d|\n", num1);
    printf("with flag -+' '  %%++ d : |%-+ d|\n", num1);
    printf("with flag +-' '  %%-- d : |%+- d|\n", num1);
    //# is no effect to %d printf("with flag #  %%#d : |%#d|\n", num0);
    printf("with width -1  %%-1d : |%-1d|\n", num1);
    printf("with precision -1  %%-.1d : |%-.1d|\n", num1);
    /*음수 width는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with width 0  %%0d : |%0d|\n", num1);
    printf("with precision 0  %%.0d : |%.0d|\n", num1);
    printf("with width 0 & precision 0  %%0.0d : |%0.0d|\n", num1);
    printf("with width 1  %%1d : |%1d|\n", num1);
    printf("with precision 1  %%.1d : |%.1d|\n", num1);
    printf("with width 1 & precision 1  %%1.1d : |%1.1d|\n", num1);
    printf("with width 7  %%7d : |%7d|\n", num1);
    printf("with precision 5  %%.5d : |%.5d|\n", num1);
    printf("with width 7 & precision 5  %%7.5d : |%7.5d|\n", num1);

    printf("--------<case %%d, -1>--------\n");
    printf("single  %%d : |%d|\n", num2);
    printf("with flag +  %%+d : |%+d|\n", num2);
    printf("with flag -  %%-d : |%-d|\n", num2);
    printf("with flag -+  %%+-d : |%-+d|\n", num2);
    printf("with flag +-  %%+-d : |%+-d|\n", num2);
    printf("with flag ' '  %% d : |% d|\n", num2);
    printf("with flag ' '+  %% +d : |% +d|\n", num2);
    printf("with flag ' '-  %% -d : |% -d|\n", num2);
    printf("with flag ' '-+  %% -+d : |% -+d|\n", num2);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num2);
    printf("with flag ' '-+  %% ++d : |% -+d|\n", num2);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num2);
    printf("with flag +' '  %%+ d : |%+ d|\n", num2);
    printf("with flag -' '  %%- d : |%- d|\n", num2);
    printf("with flag -+' '  %%-+ d : |%-+ d|\n", num2);
    printf("with flag +-' '  %%+- d : |%+- d|\n", num2);
    printf("with flag -+' '  %%++ d : |%-+ d|\n", num2);
    printf("with flag +-' '  %%-- d : |%+- d|\n", num2);
    //# is no effect to %d printf("with flag #  %%#d : |%#d|\n", num0);
    printf("with width -1  %%-1d : |%-1d|\n", num2);
    printf("with precision -1  %%-.1d : |%-.1d|\n", num2);
    /*음수 width는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with width 0  %%0d : |%0d|\n", num2);
    printf("with precision 0  %%.0d : |%.0d|\n", num2);
    printf("with width 0 & precision 0  %%0.0d : |%0.0d|\n", num2);
    printf("with width 1  %%1d : |%1d|\n", num2);
    printf("with precision 1  %%.1d : |%.1d|\n", num2);
    printf("with width 1 & precision 1  %%1.1d : |%1.1d|\n", num2);
    printf("with width 7  %%7d : |%7d|\n", num2);
    printf("with precision 5  %%.5d : |%.5d|\n", num2);
    printf("with width 7 & precision 5  %%7.5d : |%7.5d|\n", num2);

    printf("--------<case %%d, 2147483647>--------\n");
    printf("single  %%d : |%d|\n", num3);
    printf("with flag +  %%+d : |%+d|\n", num3);
    printf("with flag -  %%-d : |%-d|\n", num3);
    printf("with flag -+  %%+-d : |%-+d|\n", num3);
    printf("with flag +-  %%+-d : |%+-d|\n", num3);
    printf("with flag ' '  %% d : |% d|\n", num3);
    printf("with flag ' '+  %% +d : |% +d|\n", num3);
    printf("with flag ' '-  %% -d : |% -d|\n", num3);
    printf("with flag ' '-+  %% -+d : |% -+d|\n", num3);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num3);
    printf("with flag ' '-+  %% ++d : |% -+d|\n", num3);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num3);
    printf("with flag +' '  %%+ d : |%+ d|\n", num3);
    printf("with flag -' '  %%- d : |%- d|\n", num3);
    printf("with flag -+' '  %%-+ d : |%-+ d|\n", num3);
    printf("with flag +-' '  %%+- d : |%+- d|\n", num3);
    printf("with flag -+' '  %%++ d : |%-+ d|\n", num3);
    printf("with flag +-' '  %%-- d : |%+- d|\n", num3);
    //# is no effect to %d printf("with flag #  %%#d : |%#d|\n", num0);
    printf("with width -1  %%-1d : |%-1d|\n", num3);
    printf("with precision -1  %%-.1d : |%-.1d|\n", num3);
    /*음수 width는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with width 0  %%0d : |%0d|\n", num3);
    printf("with precision 0  %%.0d : |%.0d|\n", num3);
    printf("with width 0 & precision 0  %%0.0d : |%0.0d|\n", num3);
    printf("with width 1  %%1d : |%1d|\n", num3);
    printf("with precision 1  %%.1d : |%.1d|\n", num3);
    printf("with width 1 & precision 1  %%1.1d : |%1.1d|\n", num3);
    printf("with width 7  %%7d : |%7d|\n", num3);
    printf("with precision 5  %%.5d : |%.5d|\n", num3);
    printf("with width 7 & precision 5  %%7.5d : |%7.5d|\n", num3);

    printf("--------<case %%d, -2147483648>--------\n");
    printf("single  %%d : |%d|\n", num4);
    printf("with flag +  %%+d : |%+d|\n", num4);
    printf("with flag -  %%-d : |%-d|\n", num4);
    printf("with flag -+  %%+-d : |%-+d|\n", num4);
    printf("with flag +-  %%+-d : |%+-d|\n", num4);
    printf("with flag ' '  %% d : |% d|\n", num4);
    printf("with flag ' '+  %% +d : |% +d|\n", num4);
    printf("with flag ' '-  %% -d : |% -d|\n", num4);
    printf("with flag ' '-+  %% -+d : |% -+d|\n", num4);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num4);
    printf("with flag ' '-+  %% ++d : |% -+d|\n", num4);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num4);
    printf("with flag +' '  %%+ d : |%+ d|\n", num4);
    printf("with flag -' '  %%- d : |%- d|\n", num4);
    printf("with flag -+' '  %%-+ d : |%-+ d|\n", num4);
    printf("with flag +-' '  %%+- d : |%+- d|\n", num4);
    printf("with flag -+' '  %%++ d : |%-+ d|\n", num4);
    printf("with flag +-' '  %%-- d : |%+- d|\n", num4);
    //# is no effect to %d printf("with flag #  %%#d : |%#d|\n", num0);
    printf("with width -1  %%-1d : |%-1d|\n", num4);
    printf("with precision -1  %%-.1d : |%-.1d|\n", num4);
    /*음수 width는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with width 0  %%0d : |%0d|\n", num4);
    printf("with precision 0  %%.0d : |%.0d|\n", num4);
    printf("with width 0 & precision 0  %%0.0d : |%0.0d|\n", num4);
    printf("with width 1  %%1d : |%1d|\n", num4);
    printf("with precision 1  %%.1d : |%.1d|\n", num4);
    printf("with width 1 & precision 1  %%1.1d : |%1.1d|\n", num4);
    printf("with width 7  %%7d : |%7d|\n", num4);
    printf("with precision 5  %%.5d : |%.5d|\n", num4);
    printf("with width 7 & precision 5  %%7.5d : |%7.5d|\n", num4);

    printf("--------<case %%d, 1234>--------\n");
    printf("single  %%d : |%d|\n", num5);
    printf("with flag +  %%+d : |%+d|\n", num5);
    printf("with flag -  %%-d : |%-d|\n", num5);
    printf("with flag -+  %%+-d : |%-+d|\n", num5);
    printf("with flag +-  %%+-d : |%+-d|\n", num5);
    printf("with flag ' '  %% d : |% d|\n", num5);
    printf("with flag ' '+  %% +d : |% +d|\n", num5);
    printf("with flag ' '-  %% -d : |% -d|\n", num5);
    printf("with flag ' '-+  %% -+d : |% -+d|\n", num5);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num5);
    printf("with flag ' '-+  %% ++d : |% -+d|\n", num5);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num5);
    printf("with flag +' '  %%+ d : |%+ d|\n", num5);
    printf("with flag -' '  %%- d : |%- d|\n", num5);
    printf("with flag -+' '  %%-+ d : |%-+ d|\n", num5);
    printf("with flag +-' '  %%+- d : |%+- d|\n", num5);
    printf("with flag -+' '  %%++ d : |%-+ d|\n", num5);
    printf("with flag +-' '  %%-- d : |%+- d|\n", num5);
    //# is no effect to %d printf("with flag #  %%#d : |%#d|\n", num0);
    printf("with width -1  %%-1d : |%-1d|\n", num5);
    printf("with precision -1  %%-.1d : |%-.1d|\n", num5);
    /*음수 width는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with width 0  %%0d : |%0d|\n", num5);
    printf("with precision 0  %%.0d : |%.0d|\n", num5);
    printf("with width 0 & precision 0  %%0.0d : |%0.0d|\n", num5);
    printf("with width 1  %%1d : |%1d|\n", num5);
    printf("with precision 1  %%.1d : |%.1d|\n", num5);
    printf("with width 1 & precision 1  %%1.1d : |%1.1d|\n", num5);
    printf("with width 7  %%7d : |%7d|\n", num5);
    printf("with precision 5  %%.5d : |%.5d|\n", num5);
    printf("with width 7 & precision 5  %%7.5d : |%7.5d|\n", num5);

    printf("--------<case %%d, -1234>--------\n");
    printf("single  %%d : |%d|\n", num6);
    printf("with flag +  %%+d : |%+d|\n", num6);
    printf("with flag -  %%-d : |%-d|\n", num6);
    printf("with flag -+  %%+-d : |%-+d|\n", num6);
    printf("with flag +-  %%+-d : |%+-d|\n", num6);
    printf("with flag ' '  %% d : |% d|\n", num6);
    printf("with flag ' '+  %% +d : |% +d|\n", num6);
    printf("with flag ' '-  %% -d : |% -d|\n", num6);
    printf("with flag ' '-+  %% -+d : |% -+d|\n", num6);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num6);
    printf("with flag ' '-+  %% ++d : |% -+d|\n", num6);
    printf("with flag ' '+-  %% +-d : |% +-d|\n", num6);
    printf("with flag +' '  %%+ d : |%+ d|\n", num6);
    printf("with flag -' '  %%- d : |%- d|\n", num6);
    printf("with flag -+' '  %%-+ d : |%-+ d|\n", num6);
    printf("with flag +-' '  %%+- d : |%+- d|\n", num6);
    printf("with flag -+' '  %%++ d : |%-+ d|\n", num6);
    printf("with flag +-' '  %%-- d : |%+- d|\n", num6);
    //# is no effect to %d printf("with flag #  %%#d : |%#d|\n", num0);
    printf("with width -1  %%-1d : |%-1d|\n", num6);
    printf("with precision -1  %%-.1d : |%-.1d|\n", num6);
    /*음수 width는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with width 0  %%0d : |%0d|\n", num6);
    printf("with precision 0  %%.0d : |%.0d|\n", num6);
    printf("with width 0 & precision 0  %%0.0d : |%0.0d|\n", num6);
    printf("with width 1  %%1d : |%1d|\n", num6);
    printf("with precision 1  %%.1d : |%.1d|\n", num6);
    printf("with width 1 & precision 1  %%1.1d : |%1.1d|\n", num6);
    printf("with width 7  %%7d : |%7d|\n", num6);
    printf("with precision 5  %%.5d : |%.5d|\n", num6);
    printf("with width 7 & precision 5  %%7.5d : |%7.5d|\n", num6);

    printf("--------<case %%i, 0>--------\n");
    printf("single  %%i : |%i|\n", num0);
    printf("with flag +  %%+i : |%+i|\n", num0);
    printf("with flag -  %%-i : |%-i|\n", num0);
    printf("with flag -+  %%+-i : |%-+i|\n", num0);
    printf("with flag +-  %%+-i : |%+-i|\n", num0);
    printf("with flag ' '  %% i : |% i|\n", num0);
    printf("with flag ' '+  %% +i : |% +i|\n", num0);
    printf("with flag ' '-  %% -i : |% -i|\n", num0);
    printf("with flag ' '-+  %% -+i : |% -+i|\n", num0);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num0);
    printf("with flag ' '-+  %% ++i : |% -+i|\n", num0);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num0);
    printf("with flag +' '  %%+ i : |%+ i|\n", num0);
    printf("with flag -' '  %%- i : |%- i|\n", num0);
    printf("with flag -+' '  %%-+ i : |%-+ i|\n", num0);
    printf("with flag +-' '  %%+- i : |%+- i|\n", num0);
    printf("with flag -+' '  %%++ i : |%-+ i|\n", num0);
    printf("with flag +-' '  %%-- i : |%+- i|\n", num0);
    //# is no effect to %i printf("with flag #  %%#i : |%#i|\n", num0);
    printf("with wiith -1  %%-1i : |%-1i|\n", num0);
    printf("with precision -1  %%-.1i : |%-.1i|\n", num0);
    /*음수 wiith는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiith 0  %%0i : |%0i|\n", num0);
    printf("with precision 0  %%.0i : |%.0i|\n", num0);
    printf("with wiith 0 & precision 0  %%0.0i : |%0.0i|\n", num0);
    printf("with wiith 1  %%1i : |%1i|\n", num0);
    printf("with precision 1  %%.1i : |%.1i|\n", num0);
    printf("with wiith 1 & precision 1  %%1.1i : |%1.1i|\n", num0);
    printf("with wiith 7  %%7i : |%7i|\n", num0);
    printf("with precision 5  %%.5i : |%.5i|\n", num0);
    printf("with wiith 7 & precision 5  %%7.5i : |%7.5i|\n", num0);

    printf("--------<case %%i, +1>--------\n");
    printf("single  %%i : |%i|\n", num1);
    printf("with flag +  %%+i : |%+i|\n", num1);
    printf("with flag -  %%-i : |%-i|\n", num1);
    printf("with flag -+  %%+-i : |%-+i|\n", num1);
    printf("with flag +-  %%+-i : |%+-i|\n", num1);
    printf("with flag ' '  %% i : |% i|\n", num1);
    printf("with flag ' '+  %% +i : |% +i|\n", num1);
    printf("with flag ' '-  %% -i : |% -i|\n", num1);
    printf("with flag ' '-+  %% -+i : |% -+i|\n", num1);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num1);
    printf("with flag ' '-+  %% ++i : |% -+i|\n", num1);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num1);
    printf("with flag +' '  %%+ i : |%+ i|\n", num1);
    printf("with flag -' '  %%- i : |%- i|\n", num1);
    printf("with flag -+' '  %%-+ i : |%-+ i|\n", num1);
    printf("with flag +-' '  %%+- i : |%+- i|\n", num1);
    printf("with flag -+' '  %%++ i : |%-+ i|\n", num1);
    printf("with flag +-' '  %%-- i : |%+- i|\n", num1);
    //# is no effect to %i printf("with flag #  %%#i : |%#i|\n", num0);
    printf("with wiith -1  %%-1i : |%-1i|\n", num1);
    printf("with precision -1  %%-.1i : |%-.1i|\n", num1);
    /*음수 wiith는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiith 0  %%0i : |%0i|\n", num1);
    printf("with precision 0  %%.0i : |%.0i|\n", num1);
    printf("with wiith 0 & precision 0  %%0.0i : |%0.0i|\n", num1);
    printf("with wiith 1  %%1i : |%1i|\n", num1);
    printf("with precision 1  %%.1i : |%.1i|\n", num1);
    printf("with wiith 1 & precision 1  %%1.1i : |%1.1i|\n", num1);
    printf("with wiith 7  %%7i : |%7i|\n", num1);
    printf("with precision 5  %%.5i : |%.5i|\n", num1);
    printf("with wiith 7 & precision 5  %%7.5i : |%7.5i|\n", num1);

    printf("--------<case int, -1>--------\n");
    printf("single  %%i : |%i|\n", num2);
    printf("with flag +  %%+i : |%+i|\n", num2);
    printf("with flag -  %%-i : |%-i|\n", num2);
    printf("with flag -+  %%+-i : |%-+i|\n", num2);
    printf("with flag +-  %%+-i : |%+-i|\n", num2);
    printf("with flag ' '  %% i : |% i|\n", num2);
    printf("with flag ' '+  %% +i : |% +i|\n", num2);
    printf("with flag ' '-  %% -i : |% -i|\n", num2);
    printf("with flag ' '-+  %% -+i : |% -+i|\n", num2);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num2);
    printf("with flag ' '-+  %% ++i : |% -+i|\n", num2);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num2);
    printf("with flag +' '  %%+ i : |%+ i|\n", num2);
    printf("with flag -' '  %%- i : |%- i|\n", num2);
    printf("with flag -+' '  %%-+ i : |%-+ i|\n", num2);
    printf("with flag +-' '  %%+- i : |%+- i|\n", num2);
    printf("with flag -+' '  %%++ i : |%-+ i|\n", num2);
    printf("with flag +-' '  %%-- i : |%+- i|\n", num2);
    //# is no effect to %i printf("with flag #  %%#i : |%#i|\n", num0);
    printf("with wiith -1  %%-1i : |%-1i|\n", num2);
    printf("with precision -1  %%-.1i : |%-.1i|\n", num2);
    /*음수 wiith는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiith 0  %%0i : |%0i|\n", num2);
    printf("with precision 0  %%.0i : |%.0i|\n", num2);
    printf("with wiith 0 & precision 0  %%0.0i : |%0.0i|\n", num2);
    printf("with wiith 1  %%1i : |%1i|\n", num2);
    printf("with precision 1  %%.1i : |%.1i|\n", num2);
    printf("with wiith 1 & precision 1  %%1.1i : |%1.1i|\n", num2);
    printf("with wiith 7  %%7i : |%7i|\n", num2);
    printf("with precision 5  %%.5i : |%.5i|\n", num2);
    printf("with wiith 7 & precision 5  %%7.5i : |%7.5i|\n", num2);

    printf("--------<case %%i, 2147483647>--------\n");
    printf("single  %%i : |%i|\n", num3);
    printf("with flag +  %%+i : |%+i|\n", num3);
    printf("with flag -  %%-i : |%-i|\n", num3);
    printf("with flag -+  %%+-i : |%-+i|\n", num3);
    printf("with flag +-  %%+-i : |%+-i|\n", num3);
    printf("with flag ' '  %% i : |% i|\n", num3);
    printf("with flag ' '+  %% +i : |% +i|\n", num3);
    printf("with flag ' '-  %% -i : |% -i|\n", num3);
    printf("with flag ' '-+  %% -+i : |% -+i|\n", num3);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num3);
    printf("with flag ' '-+  %% ++i : |% -+i|\n", num3);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num3);
    printf("with flag +' '  %%+ i : |%+ i|\n", num3);
    printf("with flag -' '  %%- i : |%- i|\n", num3);
    printf("with flag -+' '  %%-+ i : |%-+ i|\n", num3);
    printf("with flag +-' '  %%+- i : |%+- i|\n", num3);
    printf("with flag -+' '  %%++ i : |%-+ i|\n", num3);
    printf("with flag +-' '  %%-- i : |%+- i|\n", num3);
    //# is no effect to %i printf("with flag #  %%#i : |%#i|\n", num0);
    printf("with wiith -1  %%-1i : |%-1i|\n", num3);
    printf("with precision -1  %%-.1i : |%-.1i|\n", num3);
    /*음수 wiith는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiith 0  %%0i : |%0i|\n", num3);
    printf("with precision 0  %%.0i : |%.0i|\n", num3);
    printf("with wiith 0 & precision 0  %%0.0i : |%0.0i|\n", num3);
    printf("with wiith 1  %%1i : |%1i|\n", num3);
    printf("with precision 1  %%.1i : |%.1i|\n", num3);
    printf("with wiith 1 & precision 1  %%1.1i : |%1.1i|\n", num3);
    printf("with wiith 7  %%7i : |%7i|\n", num3);
    printf("with precision 5  %%.5i : |%.5i|\n", num3);
    printf("with wiith 7 & precision 5  %%7.5i : |%7.5i|\n", num3);

    printf("--------<case %%i, -2147483648>--------\n");
    printf("single  %%i : |%i|\n", num4);
    printf("with flag +  %%+i : |%+i|\n", num4);
    printf("with flag -  %%-i : |%-i|\n", num4);
    printf("with flag -+  %%+-i : |%-+i|\n", num4);
    printf("with flag +-  %%+-i : |%+-i|\n", num4);
    printf("with flag ' '  %% i : |% i|\n", num4);
    printf("with flag ' '+  %% +i : |% +i|\n", num4);
    printf("with flag ' '-  %% -i : |% -i|\n", num4);
    printf("with flag ' '-+  %% -+i : |% -+i|\n", num4);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num4);
    printf("with flag ' '-+  %% ++i : |% -+i|\n", num4);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num4);
    printf("with flag +' '  %%+ i : |%+ i|\n", num4);
    printf("with flag -' '  %%- i : |%- i|\n", num4);
    printf("with flag -+' '  %%-+ i : |%-+ i|\n", num4);
    printf("with flag +-' '  %%+- i : |%+- i|\n", num4);
    printf("with flag -+' '  %%++ i : |%-+ i|\n", num4);
    printf("with flag +-' '  %%-- i : |%+- i|\n", num4);
    //# is no effect to %i printf("with flag #  %%#i : |%#i|\n", num0);
    printf("with wiith -1  %%-1i : |%-1i|\n", num4);
    printf("with precision -1  %%-.1i : |%-.1i|\n", num4);
    /*음수 wiith는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiith 0  %%0i : |%0i|\n", num4);
    printf("with precision 0  %%.0i : |%.0i|\n", num4);
    printf("with wiith 0 & precision 0  %%0.0i : |%0.0i|\n", num4);
    printf("with wiith 1  %%1i : |%1i|\n", num4);
    printf("with precision 1  %%.1i : |%.1i|\n", num4);
    printf("with wiith 1 & precision 1  %%1.1i : |%1.1i|\n", num4);
    printf("with wiith 7  %%7i : |%7i|\n", num4);
    printf("with precision 5  %%.5i : |%.5i|\n", num4);
    printf("with wiith 7 & precision 5  %%7.5i : |%7.5i|\n", num4);

    printf("--------<case %%i, 1234>--------\n");
    printf("single  %%i : |%i|\n", num5);
    printf("with flag +  %%+i : |%+i|\n", num5);
    printf("with flag -  %%-i : |%-i|\n", num5);
    printf("with flag -+  %%+-i : |%-+i|\n", num5);
    printf("with flag +-  %%+-i : |%+-i|\n", num5);
    printf("with flag ' '  %% i : |% i|\n", num5);
    printf("with flag ' '+  %% +i : |% +i|\n", num5);
    printf("with flag ' '-  %% -i : |% -i|\n", num5);
    printf("with flag ' '-+  %% -+i : |% -+i|\n", num5);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num5);
    printf("with flag ' '-+  %% ++i : |% -+i|\n", num5);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num5);
    printf("with flag +' '  %%+ i : |%+ i|\n", num5);
    printf("with flag -' '  %%- i : |%- i|\n", num5);
    printf("with flag -+' '  %%-+ i : |%-+ i|\n", num5);
    printf("with flag +-' '  %%+- i : |%+- i|\n", num5);
    printf("with flag -+' '  %%++ i : |%-+ i|\n", num5);
    printf("with flag +-' '  %%-- i : |%+- i|\n", num5);
    //# is no effect to %i printf("with flag #  %%#i : |%#i|\n", num0);
    printf("with wiith -1  %%-1i : |%-1i|\n", num5);
    printf("with precision -1  %%-.1i : |%-.1i|\n", num5);
    /*음수 wiith는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiith 0  %%0i : |%0i|\n", num5);
    printf("with precision 0  %%.0i : |%.0i|\n", num5);
    printf("with wiith 0 & precision 0  %%0.0i : |%0.0i|\n", num5);
    printf("with wiith 1  %%1i : |%1i|\n", num5);
    printf("with precision 1  %%.1i : |%.1i|\n", num5);
    printf("with wiith 1 & precision 1  %%1.1i : |%1.1i|\n", num5);
    printf("with wiith 7  %%7i : |%7i|\n", num5);
    printf("with precision 5  %%.5i : |%.5i|\n", num5);
    printf("with wiith 7 & precision 5  %%7.5i : |%7.5i|\n", num5);

    printf("--------<case %%i, -1234>--------\n");
    printf("single  %%i : |%i|\n", num6);
    printf("with flag +  %%+i : |%+i|\n", num6);
    printf("with flag -  %%-i : |%-i|\n", num6);
    printf("with flag -+  %%+-i : |%-+i|\n", num6);
    printf("with flag +-  %%+-i : |%+-i|\n", num6);
    printf("with flag ' '  %% i : |% i|\n", num6);
    printf("with flag ' '+  %% +i : |% +i|\n", num6);
    printf("with flag ' '-  %% -i : |% -i|\n", num6);
    printf("with flag ' '-+  %% -+i : |% -+i|\n", num6);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num6);
    printf("with flag ' '-+  %% ++i : |% -+i|\n", num6);
    printf("with flag ' '+-  %% +-i : |% +-i|\n", num6);
    printf("with flag +' '  %%+ i : |%+ i|\n", num6);
    printf("with flag -' '  %%- i : |%- i|\n", num6);
    printf("with flag -+' '  %%-+ i : |%-+ i|\n", num6);
    printf("with flag +-' '  %%+- i : |%+- i|\n", num6);
    printf("with flag -+' '  %%++ i : |%-+ i|\n", num6);
    printf("with flag +-' '  %%-- i : |%+- i|\n", num6);
    //# is no effect to %i printf("with flag #  %%#i : |%#i|\n", num0);
    printf("with wiith -1  %%-1i : |%-1i|\n", num6);
    printf("with precision -1  %%-.1i : |%-.1i|\n", num6);
    /*음수 wiith는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiith 0  %%0i : |%0i|\n", num6);
    printf("with precision 0  %%.0i : |%.0i|\n", num6);
    printf("with wiith 0 & precision 0  %%0.0i : |%0.0i|\n", num6);
    printf("with wiith 1  %%1i : |%1i|\n", num6);
    printf("with precision 1  %%.1i : |%.1i|\n", num6);
    printf("with wiith 1 & precision 1  %%1.1i : |%1.1i|\n", num6);
    printf("with wiith 7  %%7i : |%7i|\n", num6);
    printf("with precision 5  %%.5i : |%.5i|\n", num6);
    printf("with wiith 7 & precision 5  %%7.5i : |%7.5i|\n", num6);

    printf("--------<case %%u, 0>--------\n");
    printf("single  %%u : |%u|\n", num0);
    printf("with flag +  %%+u : |%+u|\n", num0);
    printf("with flag -  %%-u : |%-u|\n", num0);
    printf("with flag -+  %%+-u : |%-+u|\n", num0);
    printf("with flag +-  %%+-u : |%+-u|\n", num0);
    printf("with flag ' '  %% u : |% u|\n", num0);
    printf("with flag ' '+  %% +u : |% +u|\n", num0);
    printf("with flag ' '-  %% -u : |% -u|\n", num0);
    printf("with flag ' '-+  %% -+u : |% -+u|\n", num0);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num0);
    printf("with flag ' '-+  %% ++u : |% -+u|\n", num0);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num0);
    printf("with flag +' '  %%+ u : |%+ u|\n", num0);
    printf("with flag -' '  %%- u : |%- u|\n", num0);
    printf("with flag -+' '  %%-+ u : |%-+ u|\n", num0);
    printf("with flag +-' '  %%+- u : |%+- u|\n", num0);
    printf("with flag -+' '  %%++ u : |%-+ u|\n", num0);
    printf("with flag +-' '  %%-- u : |%+- u|\n", num0);
    //# is no effect to %u printf("with flag #  %%#u : |%#u|\n", num0);
    printf("with wiuth -1  %%-1u : |%-1u|\n", num0);
    printf("with precision -1  %%-.1u : |%-.1u|\n", num0);
    /*음수 wiuth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiuth 0  %%0u : |%0u|\n", num0);
    printf("with precision 0  %%.0u : |%.0u|\n", num0);
    printf("with wiuth 0 & precision 0  %%0.0u : |%0.0u|\n", num0);
    printf("with wiuth 1  %%1u : |%1u|\n", num0);
    printf("with precision 1  %%.1u : |%.1u|\n", num0);
    printf("with wiuth 1 & precision 1  %%1.1u : |%1.1u|\n", num0);
    printf("with wiuth 7  %%7u : |%7u|\n", num0);
    printf("with precision 5  %%.5u : |%.5u|\n", num0);
    printf("with wiuth 7 & precision 5  %%7.5u : |%7.5u|\n", num0);

    printf("--------<case %%u, +1>--------\n");
    printf("single  %%u : |%u|\n", num1);
    printf("with flag +  %%+u : |%+u|\n", num1);
    printf("with flag -  %%-u : |%-u|\n", num1);
    printf("with flag -+  %%+-u : |%-+u|\n", num1);
    printf("with flag +-  %%+-u : |%+-u|\n", num1);
    printf("with flag ' '  %% u : |% u|\n", num1);
    printf("with flag ' '+  %% +u : |% +u|\n", num1);
    printf("with flag ' '-  %% -u : |% -u|\n", num1);
    printf("with flag ' '-+  %% -+u : |% -+u|\n", num1);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num1);
    printf("with flag ' '-+  %% ++u : |% -+u|\n", num1);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num1);
    printf("with flag +' '  %%+ u : |%+ u|\n", num1);
    printf("with flag -' '  %%- u : |%- u|\n", num1);
    printf("with flag -+' '  %%-+ u : |%-+ u|\n", num1);
    printf("with flag +-' '  %%+- u : |%+- u|\n", num1);
    printf("with flag -+' '  %%++ u : |%-+ u|\n", num1);
    printf("with flag +-' '  %%-- u : |%+- u|\n", num1);
    //# is no effect to %u printf("with flag #  %%#u : |%#u|\n", num0);
    printf("with wiuth -1  %%-1u : |%-1u|\n", num1);
    printf("with precision -1  %%-.1u : |%-.1u|\n", num1);
    /*음수 wiuth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiuth 0  %%0u : |%0u|\n", num1);
    printf("with precision 0  %%.0u : |%.0u|\n", num1);
    printf("with wiuth 0 & precision 0  %%0.0u : |%0.0u|\n", num1);
    printf("with wiuth 1  %%1u : |%1u|\n", num1);
    printf("with precision 1  %%.1u : |%.1u|\n", num1);
    printf("with wiuth 1 & precision 1  %%1.1u : |%1.1u|\n", num1);
    printf("with wiuth 7  %%7u : |%7u|\n", num1);
    printf("with precision 5  %%.5u : |%.5u|\n", num1);
    printf("with wiuth 7 & precision 5  %%7.5u : |%7.5u|\n", num1);

    printf("--------<case %%u, -1>--------\n");
    printf("single  %%u : |%u|\n", num2);
    printf("with flag +  %%+u : |%+u|\n", num2);
    printf("with flag -  %%-u : |%-u|\n", num2);
    printf("with flag -+  %%+-u : |%-+u|\n", num2);
    printf("with flag +-  %%+-u : |%+-u|\n", num2);
    printf("with flag ' '  %% u : |% u|\n", num2);
    printf("with flag ' '+  %% +u : |% +u|\n", num2);
    printf("with flag ' '-  %% -u : |% -u|\n", num2);
    printf("with flag ' '-+  %% -+u : |% -+u|\n", num2);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num2);
    printf("with flag ' '-+  %% ++u : |% -+u|\n", num2);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num2);
    printf("with flag +' '  %%+ u : |%+ u|\n", num2);
    printf("with flag -' '  %%- u : |%- u|\n", num2);
    printf("with flag -+' '  %%-+ u : |%-+ u|\n", num2);
    printf("with flag +-' '  %%+- u : |%+- u|\n", num2);
    printf("with flag -+' '  %%++ u : |%-+ u|\n", num2);
    printf("with flag +-' '  %%-- u : |%+- u|\n", num2);
    //# is no effect to %u printf("with flag #  %%#u : |%#u|\n", num0);
    printf("with wiuth -1  %%-1u : |%-1u|\n", num2);
    printf("with precision -1  %%-.1u : |%-.1u|\n", num2);
    /*음수 wiuth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiuth 0  %%0u : |%0u|\n", num2);
    printf("with precision 0  %%.0u : |%.0u|\n", num2);
    printf("with wiuth 0 & precision 0  %%0.0u : |%0.0u|\n", num2);
    printf("with wiuth 1  %%1u : |%1u|\n", num2);
    printf("with precision 1  %%.1u : |%.1u|\n", num2);
    printf("with wiuth 1 & precision 1  %%1.1u : |%1.1u|\n", num2);
    printf("with wiuth 7  %%7u : |%7u|\n", num2);
    printf("with precision 5  %%.5u : |%.5u|\n", num2);
    printf("with wiuth 7 & precision 5  %%7.5u : |%7.5u|\n", num2);

    printf("--------<case %%u, 2147483647>--------\n");
    printf("single  %%u : |%u|\n", num3);
    printf("with flag +  %%+u : |%+u|\n", num3);
    printf("with flag -  %%-u : |%-u|\n", num3);
    printf("with flag -+  %%+-u : |%-+u|\n", num3);
    printf("with flag +-  %%+-u : |%+-u|\n", num3);
    printf("with flag ' '  %% u : |% u|\n", num3);
    printf("with flag ' '+  %% +u : |% +u|\n", num3);
    printf("with flag ' '-  %% -u : |% -u|\n", num3);
    printf("with flag ' '-+  %% -+u : |% -+u|\n", num3);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num3);
    printf("with flag ' '-+  %% ++u : |% -+u|\n", num3);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num3);
    printf("with flag +' '  %%+ u : |%+ u|\n", num3);
    printf("with flag -' '  %%- u : |%- u|\n", num3);
    printf("with flag -+' '  %%-+ u : |%-+ u|\n", num3);
    printf("with flag +-' '  %%+- u : |%+- u|\n", num3);
    printf("with flag -+' '  %%++ u : |%-+ u|\n", num3);
    printf("with flag +-' '  %%-- u : |%+- u|\n", num3);
    //# is no effect to %u printf("with flag #  %%#u : |%#u|\n", num0);
    printf("with wiuth -1  %%-1u : |%-1u|\n", num3);
    printf("with precision -1  %%-.1u : |%-.1u|\n", num3);
    /*음수 wiuth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiuth 0  %%0u : |%0u|\n", num3);
    printf("with precision 0  %%.0u : |%.0u|\n", num3);
    printf("with wiuth 0 & precision 0  %%0.0u : |%0.0u|\n", num3);
    printf("with wiuth 1  %%1u : |%1u|\n", num3);
    printf("with precision 1  %%.1u : |%.1u|\n", num3);
    printf("with wiuth 1 & precision 1  %%1.1u : |%1.1u|\n", num3);
    printf("with wiuth 7  %%7u : |%7u|\n", num3);
    printf("with precision 5  %%.5u : |%.5u|\n", num3);
    printf("with wiuth 7 & precision 5  %%7.5u : |%7.5u|\n", num3);

    printf("--------<case %%u, -2147483648>--------\n");
    printf("single  %%u : |%u|\n", num4);
    printf("with flag +  %%+u : |%+u|\n", num4);
    printf("with flag -  %%-u : |%-u|\n", num4);
    printf("with flag -+  %%+-u : |%-+u|\n", num4);
    printf("with flag +-  %%+-u : |%+-u|\n", num4);
    printf("with flag ' '  %% u : |% u|\n", num4);
    printf("with flag ' '+  %% +u : |% +u|\n", num4);
    printf("with flag ' '-  %% -u : |% -u|\n", num4);
    printf("with flag ' '-+  %% -+u : |% -+u|\n", num4);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num4);
    printf("with flag ' '-+  %% ++u : |% -+u|\n", num4);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num4);
    printf("with flag +' '  %%+ u : |%+ u|\n", num4);
    printf("with flag -' '  %%- u : |%- u|\n", num4);
    printf("with flag -+' '  %%-+ u : |%-+ u|\n", num4);
    printf("with flag +-' '  %%+- u : |%+- u|\n", num4);
    printf("with flag -+' '  %%++ u : |%-+ u|\n", num4);
    printf("with flag +-' '  %%-- u : |%+- u|\n", num4);
    //# is no effect to %u printf("with flag #  %%#u : |%#u|\n", num0);
    printf("with wiuth -1  %%-1u : |%-1u|\n", num4);
    printf("with precision -1  %%-.1u : |%-.1u|\n", num4);
    /*음수 wiuth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiuth 0  %%0u : |%0u|\n", num4);
    printf("with precision 0  %%.0u : |%.0u|\n", num4);
    printf("with wiuth 0 & precision 0  %%0.0u : |%0.0u|\n", num4);
    printf("with wiuth 1  %%1u : |%1u|\n", num4);
    printf("with precision 1  %%.1u : |%.1u|\n", num4);
    printf("with wiuth 1 & precision 1  %%1.1u : |%1.1u|\n", num4);
    printf("with wiuth 7  %%7u : |%7u|\n", num4);
    printf("with precision 5  %%.5u : |%.5u|\n", num4);
    printf("with wiuth 7 & precision 5  %%7.5u : |%7.5u|\n", num4);

     printf("--------<case %%u, 1234>--------\n");
    printf("single  %%u : |%u|\n", num5);
    printf("with flag +  %%+u : |%+u|\n", num5);
    printf("with flag -  %%-u : |%-u|\n", num5);
    printf("with flag -+  %%+-u : |%-+u|\n", num5);
    printf("with flag +-  %%+-u : |%+-u|\n", num5);
    printf("with flag ' '  %% u : |% u|\n", num5);
    printf("with flag ' '+  %% +u : |% +u|\n", num5);
    printf("with flag ' '-  %% -u : |% -u|\n", num5);
    printf("with flag ' '-+  %% -+u : |% -+u|\n", num5);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num5);
    printf("with flag ' '-+  %% ++u : |% -+u|\n", num5);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num5);
    printf("with flag +' '  %%+ u : |%+ u|\n", num5);
    printf("with flag -' '  %%- u : |%- u|\n", num5);
    printf("with flag -+' '  %%-+ u : |%-+ u|\n", num5);
    printf("with flag +-' '  %%+- u : |%+- u|\n", num5);
    printf("with flag -+' '  %%++ u : |%-+ u|\n", num5);
    printf("with flag +-' '  %%-- u : |%+- u|\n", num5);
    //# is no effect to %u printf("with flag #  %%#u : |%#u|\n", num0);
    printf("with wiuth -1  %%-1u : |%-1u|\n", num5);
    printf("with precision -1  %%-.1u : |%-.1u|\n", num5);
    /*음수 wiuth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiuth 0  %%0u : |%0u|\n", num5);
    printf("with precision 0  %%.0u : |%.0u|\n", num5);
    printf("with wiuth 0 & precision 0  %%0.0u : |%0.0u|\n", num5);
    printf("with wiuth 1  %%1u : |%1u|\n", num5);
    printf("with precision 1  %%.1u : |%.1u|\n", num5);
    printf("with wiuth 1 & precision 1  %%1.1u : |%1.1u|\n", num5);
    printf("with wiuth 7  %%7u : |%7u|\n", num5);
    printf("with precision 5  %%.5u : |%.5u|\n", num5);
    printf("with wiuth 7 & precision 5  %%7.5u : |%7.5u|\n", num5);

    printf("--------<case %%u, -1234>--------\n");
    printf("single  %%u : |%u|\n", num6);
    printf("with flag +  %%+u : |%+u|\n", num6);
    printf("with flag -  %%-u : |%-u|\n", num6);
    printf("with flag -+  %%+-u : |%-+u|\n", num6);
    printf("with flag +-  %%+-u : |%+-u|\n", num6);
    printf("with flag ' '  %% u : |% u|\n", num6);
    printf("with flag ' '+  %% +u : |% +u|\n", num6);
    printf("with flag ' '-  %% -u : |% -u|\n", num6);
    printf("with flag ' '-+  %% -+u : |% -+u|\n", num6);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num6);
    printf("with flag ' '-+  %% ++u : |% -+u|\n", num6);
    printf("with flag ' '+-  %% +-u : |% +-u|\n", num6);
    printf("with flag +' '  %%+ u : |%+ u|\n", num6);
    printf("with flag -' '  %%- u : |%- u|\n", num6);
    printf("with flag -+' '  %%-+ u : |%-+ u|\n", num6);
    printf("with flag +-' '  %%+- u : |%+- u|\n", num6);
    printf("with flag -+' '  %%++ u : |%-+ u|\n", num6);
    printf("with flag +-' '  %%-- u : |%+- u|\n", num6);
    //# is no effect to %u printf("with flag #  %%#u : |%#u|\n", num0);
    printf("with wiuth -1  %%-1u : |%-1u|\n", num6);
    printf("with precision -1  %%-.1u : |%-.1u|\n", num6);
    /*음수 wiuth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiuth 0  %%0u : |%0u|\n", num6);
    printf("with precision 0  %%.0u : |%.0u|\n", num6);
    printf("with wiuth 0 & precision 0  %%0.0u : |%0.0u|\n", num6);
    printf("with wiuth 1  %%1u : |%1u|\n", num6);
    printf("with precision 1  %%.1u : |%.1u|\n", num6);
    printf("with wiuth 1 & precision 1  %%1.1u : |%1.1u|\n", num6);
    printf("with wiuth 7  %%7u : |%7u|\n", num6);
    printf("with precision 5  %%.5u : |%.5u|\n", num6);
    printf("with wiuth 7 & precision 5  %%7.5u : |%7.5u|\n", num6);


    printf("--------<case %%x, 0>--------\n");
    printf("single  %%x : |%x|\n", num0);
    printf("with flag +  %%+x : |%+x|\n", num0);
    printf("with flag -  %%-x : |%-x|\n", num0);
    printf("with flag -+  %%+-x : |%-+x|\n", num0);
    printf("with flag +-  %%+-x : |%+-x|\n", num0);
    printf("with flag ' '  %% x : |% x|\n", num0);
    printf("with flag ' '+  %% +x : |% +x|\n", num0);
    printf("with flag ' '-  %% -x : |% -x|\n", num0);
    printf("with flag ' '-+  %% -+x : |% -+x|\n", num0);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num0);
    printf("with flag ' '-+  %% ++x : |% -+x|\n", num0);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num0);
    printf("with flag +' '  %%+ x : |%+ x|\n", num0);
    printf("with flag -' '  %%- x : |%- x|\n", num0);
    printf("with flag -+' '  %%-+ x : |%-+ x|\n", num0);
    printf("with flag +-' '  %%+- x : |%+- x|\n", num0);
    printf("with flag -+' '  %%++ x : |%-+ x|\n", num0);
    printf("with flag +-' '  %%-- x : |%+- x|\n", num0);
    printf("with wixth -1  %%-1x : |%-1x|\n", num0);
    printf("with precision -1  %%-.1x : |%-.1x|\n", num0);
    /*음수 wixth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wixth 0  %%0x : |%0x|\n", num0);
    printf("with precision 0  %%.0x : |%.0x|\n", num0);
    printf("with wixth 0 & precision 0  %%0.0x : |%0.0x|\n", num0);
    printf("with wixth 1  %%1x : |%1x|\n", num0);
    printf("with precision 1  %%.1x : |%.1x|\n", num0);
    printf("with wixth 1 & precision 1  %%1.1x : |%1.1x|\n", num0);
    printf("with wixth 7  %%7x : |%7x|\n", num0);
    printf("with precision 5  %%.5x : |%.5x|\n", num0);
    printf("with wixth 7 & precision 5  %%7.5x : |%7.5x|\n", num0);
    printf("with flag #  %%#x : |%#x|\n", num0);

    printf("--------<case int, +1>--------\n");
    printf("single  %%x : |%x|\n", num1);
    printf("with flag +  %%+x : |%+x|\n", num1);
    printf("with flag -  %%-x : |%-x|\n", num1);
    printf("with flag -+  %%+-x : |%-+x|\n", num1);
    printf("with flag +-  %%+-x : |%+-x|\n", num1);
    printf("with flag ' '  %% x : |% x|\n", num1);
    printf("with flag ' '+  %% +x : |% +x|\n", num1);
    printf("with flag ' '-  %% -x : |% -x|\n", num1);
    printf("with flag ' '-+  %% -+x : |% -+x|\n", num1);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num1);
    printf("with flag ' '-+  %% ++x : |% -+x|\n", num1);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num1);
    printf("with flag +' '  %%+ x : |%+ x|\n", num1);
    printf("with flag -' '  %%- x : |%- x|\n", num1);
    printf("with flag -+' '  %%-+ x : |%-+ x|\n", num1);
    printf("with flag +-' '  %%+- x : |%+- x|\n", num1);
    printf("with flag -+' '  %%++ x : |%-+ x|\n", num1);
    printf("with flag +-' '  %%-- x : |%+- x|\n", num1);
    //# is no effect to %x printf("with flag #  %%#x : |%#x|\n", num0);
    printf("with wixth -1  %%-1x : |%-1x|\n", num1);
    printf("with precision -1  %%-.1x : |%-.1x|\n", num1);
    /*음수 wixth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wixth 0  %%0x : |%0x|\n", num1);
    printf("with precision 0  %%.0x : |%.0x|\n", num1);
    printf("with wixth 0 & precision 0  %%0.0x : |%0.0x|\n", num1);
    printf("with wixth 1  %%1x : |%1x|\n", num1);
    printf("with precision 1  %%.1x : |%.1x|\n", num1);
    printf("with wixth 1 & precision 1  %%1.1x : |%1.1x|\n", num1);
    printf("with wixth 7  %%7x : |%7x|\n", num1);
    printf("with precision 5  %%.5x : |%.5x|\n", num1);
    printf("with wixth 7 & precision 5  %%7.5x : |%7.5x|\n", num1);
    printf("with flag #  %%#x : |%#x|\n", num1);

    printf("--------<case %%x, -1>--------\n");
    printf("single  %%x : |%x|\n", num2);
    printf("with flag +  %%+x : |%+x|\n", num2);
    printf("with flag -  %%-x : |%-x|\n", num2);
    printf("with flag -+  %%+-x : |%-+x|\n", num2);
    printf("with flag +-  %%+-x : |%+-x|\n", num2);
    printf("with flag ' '  %% x : |% x|\n", num2);
    printf("with flag ' '+  %% +x : |% +x|\n", num2);
    printf("with flag ' '-  %% -x : |% -x|\n", num2);
    printf("with flag ' '-+  %% -+x : |% -+x|\n", num2);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num2);
    printf("with flag ' '-+  %% ++x : |% -+x|\n", num2);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num2);
    printf("with flag +' '  %%+ x : |%+ x|\n", num2);
    printf("with flag -' '  %%- x : |%- x|\n", num2);
    printf("with flag -+' '  %%-+ x : |%-+ x|\n", num2);
    printf("with flag +-' '  %%+- x : |%+- x|\n", num2);
    printf("with flag -+' '  %%++ x : |%-+ x|\n", num2);
    printf("with flag +-' '  %%-- x : |%+- x|\n", num2);
    //# is no effect to %x printf("with flag #  %%#x : |%#x|\n", num0);
    printf("with wixth -1  %%-1x : |%-1x|\n", num2);
    printf("with precision -1  %%-.1x : |%-.1x|\n", num2);
    /*음수 wixth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wixth 0  %%0x : |%0x|\n", num2);
    printf("with precision 0  %%.0x : |%.0x|\n", num2);
    printf("with wixth 0 & precision 0  %%0.0x : |%0.0x|\n", num2);
    printf("with wixth 1  %%1x : |%1x|\n", num2);
    printf("with precision 1  %%.1x : |%.1x|\n", num2);
    printf("with wixth 1 & precision 1  %%1.1x : |%1.1x|\n", num2);
    printf("with wixth 7  %%7x : |%7x|\n", num2);
    printf("with precision 5  %%.5x : |%.5x|\n", num2);
    printf("with wixth 7 & precision 5  %%7.5x : |%7.5x|\n", num2);
    printf("with flag #  %%#x : |%#x|\n", num2);

    printf("--------<case %%x, 2147483647>--------\n");
    printf("single  %%x : |%x|\n", num3);
    printf("with flag +  %%+x : |%+x|\n", num3);
    printf("with flag -  %%-x : |%-x|\n", num3);
    printf("with flag -+  %%+-x : |%-+x|\n", num3);
    printf("with flag +-  %%+-x : |%+-x|\n", num3);
    printf("with flag ' '  %% x : |% x|\n", num3);
    printf("with flag ' '+  %% +x : |% +x|\n", num3);
    printf("with flag ' '-  %% -x : |% -x|\n", num3);
    printf("with flag ' '-+  %% -+x : |% -+x|\n", num3);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num3);
    printf("with flag ' '-+  %% ++x : |% -+x|\n", num3);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num3);
    printf("with flag +' '  %%+ x : |%+ x|\n", num3);
    printf("with flag -' '  %%- x : |%- x|\n", num3);
    printf("with flag -+' '  %%-+ x : |%-+ x|\n", num3);
    printf("with flag +-' '  %%+- x : |%+- x|\n", num3);
    printf("with flag -+' '  %%++ x : |%-+ x|\n", num3);
    printf("with flag +-' '  %%-- x : |%+- x|\n", num3);
    //# is no effect to %x printf("with flag #  %%#x : |%#x|\n", num0);
    printf("with wixth -1  %%-1x : |%-1x|\n", num3);
    printf("with precision -1  %%-.1x : |%-.1x|\n", num3);
    /*음수 wixth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wixth 0  %%0x : |%0x|\n", num3);
    printf("with precision 0  %%.0x : |%.0x|\n", num3);
    printf("with wixth 0 & precision 0  %%0.0x : |%0.0x|\n", num3);
    printf("with wixth 1  %%1x : |%1x|\n", num3);
    printf("with precision 1  %%.1x : |%.1x|\n", num3);
    printf("with wixth 1 & precision 1  %%1.1x : |%1.1x|\n", num3);
    printf("with wixth 7  %%7x : |%7x|\n", num3);
    printf("with precision 5  %%.5x : |%.5x|\n", num3);
    printf("with wixth 7 & precision 5  %%7.5x : |%7.5x|\n", num3);
    printf("with flag #  %%#x : |%#x|\n", num3);

    printf("--------<case %%x, -2147483648>--------\n");
    printf("single  %%x : |%x|\n", num4);
    printf("with flag +  %%+x : |%+x|\n", num4);
    printf("with flag -  %%-x : |%-x|\n", num4);
    printf("with flag -+  %%+-x : |%-+x|\n", num4);
    printf("with flag +-  %%+-x : |%+-x|\n", num4);
    printf("with flag ' '  %% x : |% x|\n", num4);
    printf("with flag ' '+  %% +x : |% +x|\n", num4);
    printf("with flag ' '-  %% -x : |% -x|\n", num4);
    printf("with flag ' '-+  %% -+x : |% -+x|\n", num4);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num4);
    printf("with flag ' '-+  %% ++x : |% -+x|\n", num4);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num4);
    printf("with flag +' '  %%+ x : |%+ x|\n", num4);
    printf("with flag -' '  %%- x : |%- x|\n", num4);
    printf("with flag -+' '  %%-+ x : |%-+ x|\n", num4);
    printf("with flag +-' '  %%+- x : |%+- x|\n", num4);
    printf("with flag -+' '  %%++ x : |%-+ x|\n", num4);
    printf("with flag +-' '  %%-- x : |%+- x|\n", num4);
    //# is no effect to %x printf("with flag #  %%#x : |%#x|\n", num0);
    printf("with wixth -1  %%-1x : |%-1x|\n", num4);
    printf("with precision -1  %%-.1x : |%-.1x|\n", num4);
    /*음수 wixth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wixth 0  %%0x : |%0x|\n", num4);
    printf("with precision 0  %%.0x : |%.0x|\n", num4);
    printf("with wixth 0 & precision 0  %%0.0x : |%0.0x|\n", num4);
    printf("with wixth 1  %%1x : |%1x|\n", num4);
    printf("with precision 1  %%.1x : |%.1x|\n", num4);
    printf("with wixth 1 & precision 1  %%1.1x : |%1.1x|\n", num4);
    printf("with wixth 7  %%7x : |%7x|\n", num4);
    printf("with precision 5  %%.5x : |%.5x|\n", num4);
    printf("with wixth 7 & precision 5  %%7.5x : |%7.5x|\n", num4);
    printf("with flag #  %%#x : |%#x|\n", num4);

    printf("--------<case %%x, 1234>--------\n");
    printf("single  %%x : |%x|\n", num5);
    printf("with flag +  %%+x : |%+x|\n", num5);
    printf("with flag -  %%-x : |%-x|\n", num5);
    printf("with flag -+  %%+-x : |%-+x|\n", num5);
    printf("with flag +-  %%+-x : |%+-x|\n", num5);
    printf("with flag ' '  %% x : |% x|\n", num5);
    printf("with flag ' '+  %% +x : |% +x|\n", num5);
    printf("with flag ' '-  %% -x : |% -x|\n", num5);
    printf("with flag ' '-+  %% -+x : |% -+x|\n", num5);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num5);
    printf("with flag ' '-+  %% ++x : |% -+x|\n", num5);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num5);
    printf("with flag +' '  %%+ x : |%+ x|\n", num5);
    printf("with flag -' '  %%- x : |%- x|\n", num5);
    printf("with flag -+' '  %%-+ x : |%-+ x|\n", num5);
    printf("with flag +-' '  %%+- x : |%+- x|\n", num5);
    printf("with flag -+' '  %%++ x : |%-+ x|\n", num5);
    printf("with flag +-' '  %%-- x : |%+- x|\n", num5);
    //# is no effect to %x printf("with flag #  %%#x : |%#x|\n", num0);
    printf("with wixth -1  %%-1x : |%-1x|\n", num5);
    printf("with precision -1  %%-.1x : |%-.1x|\n", num5);
    /*음수 wixth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wixth 0  %%0x : |%0x|\n", num5);
    printf("with precision 0  %%.0x : |%.0x|\n", num5);
    printf("with wixth 0 & precision 0  %%0.0x : |%0.0x|\n", num5);
    printf("with wixth 1  %%1x : |%1x|\n", num5);
    printf("with precision 1  %%.1x : |%.1x|\n", num5);
    printf("with wixth 1 & precision 1  %%1.1x : |%1.1x|\n", num5);
    printf("with wixth 7  %%7x : |%7x|\n", num5);
    printf("with precision 5  %%.5x : |%.5x|\n", num5);
    printf("with wixth 7 & precision 5  %%7.5x : |%7.5x|\n", num5);
    printf("with flag #  %%#x : |%#x|\n", num5);

    printf("--------<case %%x, -1234>--------\n");
    printf("single  %%x : |%x|\n", num6);
    printf("with flag +  %%+x : |%+x|\n", num6);
    printf("with flag -  %%-x : |%-x|\n", num6);
    printf("with flag -+  %%+-x : |%-+x|\n", num6);
    printf("with flag +-  %%+-x : |%+-x|\n", num6);
    printf("with flag ' '  %% x : |% x|\n", num6);
    printf("with flag ' '+  %% +x : |% +x|\n", num6);
    printf("with flag ' '-  %% -x : |% -x|\n", num6);
    printf("with flag ' '-+  %% -+x : |% -+x|\n", num6);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num6);
    printf("with flag ' '-+  %% ++x : |% -+x|\n", num6);
    printf("with flag ' '+-  %% +-x : |% +-x|\n", num6);
    printf("with flag +' '  %%+ x : |%+ x|\n", num6);
    printf("with flag -' '  %%- x : |%- x|\n", num6);
    printf("with flag -+' '  %%-+ x : |%-+ x|\n", num6);
    printf("with flag +-' '  %%+- x : |%+- x|\n", num6);
    printf("with flag -+' '  %%++ x : |%-+ x|\n", num6);
    printf("with flag +-' '  %%-- x : |%+- x|\n", num6);
    //# is no effect to %x printf("with flag #  %%#x : |%#x|\n", num0);
    printf("with wixth -1  %%-1x : |%-1x|\n", num6);
    printf("with precision -1  %%-.1x : |%-.1x|\n", num6);
    /*음수 wixth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wixth 0  %%0x : |%0x|\n", num6);
    printf("with precision 0  %%.0x : |%.0x|\n", num6);
    printf("with wixth 0 & precision 0  %%0.0x : |%0.0x|\n", num6);
    printf("with wixth 1  %%1x : |%1x|\n", num6);
    printf("with precision 1  %%.1x : |%.1x|\n", num6);
    printf("with wixth 1 & precision 1  %%1.1x : |%1.1x|\n", num6);
    printf("with wixth 7  %%7x : |%7x|\n", num6);
    printf("with precision 5  %%.5x : |%.5x|\n", num6);
    printf("with wixth 7 & precision 5  %%7.5x : |%7.5x|\n", num6);
    printf("with flag #  %%#x : |%#x|\n", num6);

    printf("--------<case %%X, 0>--------\n");
    printf("single  %%X : |%X|\n", num0);
    printf("with flag +  %%+X : |%+X|\n", num0);
    printf("with flag -  %%-X : |%-X|\n", num0);
    printf("with flag -+  %%+-X : |%-+X|\n", num0);
    printf("with flag +-  %%+-X : |%+-X|\n", num0);
    printf("with flag ' '  %% X : |% X|\n", num0);
    printf("with flag ' '+  %% +X : |% +X|\n", num0);
    printf("with flag ' '-  %% -X : |% -X|\n", num0);
    printf("with flag ' '-+  %% -+X : |% -+X|\n", num0);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num0);
    printf("with flag ' '-+  %% ++X : |% -+X|\n", num0);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num0);
    printf("with flag +' '  %%+ X : |%+ X|\n", num0);
    printf("with flag -' '  %%- X : |%- X|\n", num0);
    printf("with flag -+' '  %%-+ X : |%-+ X|\n", num0);
    printf("with flag +-' '  %%+- X : |%+- X|\n", num0);
    printf("with flag -+' '  %%++ X : |%-+ X|\n", num0);
    printf("with flag +-' '  %%-- X : |%+- X|\n", num0);
    printf("with wiXth -1  %%-1X : |%-1X|\n", num0);
    printf("with precision -1  %%-.1X : |%-.1X|\n", num0);
    /*음수 wiXth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiXth 0  %%0X : |%0X|\n", num0);
    printf("with precision 0  %%.0X : |%.0X|\n", num0);
    printf("with wiXth 0 & precision 0  %%0.0X : |%0.0X|\n", num0);
    printf("with wiXth 1  %%1X : |%1X|\n", num0);
    printf("with precision 1  %%.1X : |%.1X|\n", num0);
    printf("with wiXth 1 & precision 1  %%1.1X : |%1.1X|\n", num0);
    printf("with wiXth 7  %%7X : |%7X|\n", num0);
    printf("with precision 5  %%.5X : |%.5X|\n", num0);
    printf("with wiXth 7 & precision 5  %%7.5X : |%7.5X|\n", num0);
    printf("with flag #  %%#X : |%#X|\n", num0);

    printf("--------<case %%X, +1>--------\n");
    printf("single  %%X : |%X|\n", num1);
    printf("with flag +  %%+X : |%+X|\n", num1);
    printf("with flag -  %%-X : |%-X|\n", num1);
    printf("with flag -+  %%+-X : |%-+X|\n", num1);
    printf("with flag +-  %%+-X : |%+-X|\n", num1);
    printf("with flag ' '  %% X : |% X|\n", num1);
    printf("with flag ' '+  %% +X : |% +X|\n", num1);
    printf("with flag ' '-  %% -X : |% -X|\n", num1);
    printf("with flag ' '-+  %% -+X : |% -+X|\n", num1);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num1);
    printf("with flag ' '-+  %% ++X : |% -+X|\n", num1);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num1);
    printf("with flag +' '  %%+ X : |%+ X|\n", num1);
    printf("with flag -' '  %%- X : |%- X|\n", num1);
    printf("with flag -+' '  %%-+ X : |%-+ X|\n", num1);
    printf("with flag +-' '  %%+- X : |%+- X|\n", num1);
    printf("with flag -+' '  %%++ X : |%-+ X|\n", num1);
    printf("with flag +-' '  %%-- X : |%+- X|\n", num1);
    //# is no effect to %X printf("with flag #  %%#X : |%#X|\n", num0);
    printf("with wiXth -1  %%-1X : |%-1X|\n", num1);
    printf("with precision -1  %%-.1X : |%-.1X|\n", num1);
    /*음수 wiXth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiXth 0  %%0X : |%0X|\n", num1);
    printf("with precision 0  %%.0X : |%.0X|\n", num1);
    printf("with wiXth 0 & precision 0  %%0.0X : |%0.0X|\n", num1);
    printf("with wiXth 1  %%1X : |%1X|\n", num1);
    printf("with precision 1  %%.1X : |%.1X|\n", num1);
    printf("with wiXth 1 & precision 1  %%1.1X : |%1.1X|\n", num1);
    printf("with wiXth 7  %%7X : |%7X|\n", num1);
    printf("with precision 5  %%.5X : |%.5X|\n", num1);
    printf("with wiXth 7 & precision 5  %%7.5X : |%7.5X|\n", num1);
    printf("with flag #  %%#X : |%#X|\n", num1);

    printf("--------<case %%X, -1>--------\n");
    printf("single  %%X : |%X|\n", num2);
    printf("with flag +  %%+X : |%+X|\n", num2);
    printf("with flag -  %%-X : |%-X|\n", num2);
    printf("with flag -+  %%+-X : |%-+X|\n", num2);
    printf("with flag +-  %%+-X : |%+-X|\n", num2);
    printf("with flag ' '  %% X : |% X|\n", num2);
    printf("with flag ' '+  %% +X : |% +X|\n", num2);
    printf("with flag ' '-  %% -X : |% -X|\n", num2);
    printf("with flag ' '-+  %% -+X : |% -+X|\n", num2);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num2);
    printf("with flag ' '-+  %% ++X : |% -+X|\n", num2);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num2);
    printf("with flag +' '  %%+ X : |%+ X|\n", num2);
    printf("with flag -' '  %%- X : |%- X|\n", num2);
    printf("with flag -+' '  %%-+ X : |%-+ X|\n", num2);
    printf("with flag +-' '  %%+- X : |%+- X|\n", num2);
    printf("with flag -+' '  %%++ X : |%-+ X|\n", num2);
    printf("with flag +-' '  %%-- X : |%+- X|\n", num2);
    //# is no effect to %X printf("with flag #  %%#X : |%#X|\n", num0);
    printf("with wiXth -1  %%-1X : |%-1X|\n", num2);
    printf("with precision -1  %%-.1X : |%-.1X|\n", num2);
    /*음수 wiXth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiXth 0  %%0X : |%0X|\n", num2);
    printf("with precision 0  %%.0X : |%.0X|\n", num2);
    printf("with wiXth 0 & precision 0  %%0.0X : |%0.0X|\n", num2);
    printf("with wiXth 1  %%1X : |%1X|\n", num2);
    printf("with precision 1  %%.1X : |%.1X|\n", num2);
    printf("with wiXth 1 & precision 1  %%1.1X : |%1.1X|\n", num2);
    printf("with wiXth 7  %%7X : |%7X|\n", num2);
    printf("with precision 5  %%.5X : |%.5X|\n", num2);
    printf("with wiXth 7 & precision 5  %%7.5X : |%7.5X|\n", num2);
    printf("with flag #  %%#X : |%#X|\n", num2);

    printf("--------<case %%X, 2147483647>--------\n");
    printf("single  %%X : |%X|\n", num3);
    printf("with flag +  %%+X : |%+X|\n", num3);
    printf("with flag -  %%-X : |%-X|\n", num3);
    printf("with flag -+  %%+-X : |%-+X|\n", num3);
    printf("with flag +-  %%+-X : |%+-X|\n", num3);
    printf("with flag ' '  %% X : |% X|\n", num3);
    printf("with flag ' '+  %% +X : |% +X|\n", num3);
    printf("with flag ' '-  %% -X : |% -X|\n", num3);
    printf("with flag ' '-+  %% -+X : |% -+X|\n", num3);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num3);
    printf("with flag ' '-+  %% ++X : |% -+X|\n", num3);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num3);
    printf("with flag +' '  %%+ X : |%+ X|\n", num3);
    printf("with flag -' '  %%- X : |%- X|\n", num3);
    printf("with flag -+' '  %%-+ X : |%-+ X|\n", num3);
    printf("with flag +-' '  %%+- X : |%+- X|\n", num3);
    printf("with flag -+' '  %%++ X : |%-+ X|\n", num3);
    printf("with flag +-' '  %%-- X : |%+- X|\n", num3);
    //# is no effect to %X printf("with flag #  %%#X : |%#X|\n", num0);
    printf("with wiXth -1  %%-1X : |%-1X|\n", num3);
    printf("with precision -1  %%-.1X : |%-.1X|\n", num3);
    /*음수 wiXth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiXth 0  %%0X : |%0X|\n", num3);
    printf("with precision 0  %%.0X : |%.0X|\n", num3);
    printf("with wiXth 0 & precision 0  %%0.0X : |%0.0X|\n", num3);
    printf("with wiXth 1  %%1X : |%1X|\n", num3);
    printf("with precision 1  %%.1X : |%.1X|\n", num3);
    printf("with wiXth 1 & precision 1  %%1.1X : |%1.1X|\n", num3);
    printf("with wiXth 7  %%7X : |%7X|\n", num3);
    printf("with precision 5  %%.5X : |%.5X|\n", num3);
    printf("with wiXth 7 & precision 5  %%7.5X : |%7.5X|\n", num3);
    printf("with flag #  %%#X : |%#X|\n", num3);

    printf("--------<case %%X, -2147483648>--------\n");
    printf("single  %%X : |%X|\n", num4);
    printf("with flag +  %%+X : |%+X|\n", num4);
    printf("with flag -  %%-X : |%-X|\n", num4);
    printf("with flag -+  %%+-X : |%-+X|\n", num4);
    printf("with flag +-  %%+-X : |%+-X|\n", num4);
    printf("with flag ' '  %% X : |% X|\n", num4);
    printf("with flag ' '+  %% +X : |% +X|\n", num4);
    printf("with flag ' '-  %% -X : |% -X|\n", num4);
    printf("with flag ' '-+  %% -+X : |% -+X|\n", num4);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num4);
    printf("with flag ' '-+  %% ++X : |% -+X|\n", num4);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num4);
    printf("with flag +' '  %%+ X : |%+ X|\n", num4);
    printf("with flag -' '  %%- X : |%- X|\n", num4);
    printf("with flag -+' '  %%-+ X : |%-+ X|\n", num4);
    printf("with flag +-' '  %%+- X : |%+- X|\n", num4);
    printf("with flag -+' '  %%++ X : |%-+ X|\n", num4);
    printf("with flag +-' '  %%-- X : |%+- X|\n", num4);
    //# is no effect to %X printf("with flag #  %%#X : |%#X|\n", num0);
    printf("with wiXth -1  %%-1X : |%-1X|\n", num4);
    printf("with precision -1  %%-.1X : |%-.1X|\n", num4);
    /*음수 wiXth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiXth 0  %%0X : |%0X|\n", num4);
    printf("with precision 0  %%.0X : |%.0X|\n", num4);
    printf("with wiXth 0 & precision 0  %%0.0X : |%0.0X|\n", num4);
    printf("with wiXth 1  %%1X : |%1X|\n", num4);
    printf("with precision 1  %%.1X : |%.1X|\n", num4);
    printf("with wiXth 1 & precision 1  %%1.1X : |%1.1X|\n", num4);
    printf("with wiXth 7  %%7X : |%7X|\n", num4);
    printf("with precision 5  %%.5X : |%.5X|\n", num4);
    printf("with wiXth 7 & precision 5  %%7.5X : |%7.5X|\n", num4);
    printf("with flag #  %%#X : |%#X|\n", num4);

    printf("--------<case %%X, 1234>--------\n");
    printf("single  %%X : |%X|\n", num5);
    printf("with flag +  %%+X : |%+X|\n", num5);
    printf("with flag -  %%-X : |%-X|\n", num5);
    printf("with flag -+  %%+-X : |%-+X|\n", num5);
    printf("with flag +-  %%+-X : |%+-X|\n", num5);
    printf("with flag ' '  %% X : |% X|\n", num5);
    printf("with flag ' '+  %% +X : |% +X|\n", num5);
    printf("with flag ' '-  %% -X : |% -X|\n", num5);
    printf("with flag ' '-+  %% -+X : |% -+X|\n", num5);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num5);
    printf("with flag ' '-+  %% ++X : |% -+X|\n", num5);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num5);
    printf("with flag +' '  %%+ X : |%+ X|\n", num5);
    printf("with flag -' '  %%- X : |%- X|\n", num5);
    printf("with flag -+' '  %%-+ X : |%-+ X|\n", num5);
    printf("with flag +-' '  %%+- X : |%+- X|\n", num5);
    printf("with flag -+' '  %%++ X : |%-+ X|\n", num5);
    printf("with flag +-' '  %%-- X : |%+- X|\n", num5);
    //# is no effect to %X printf("with flag #  %%#X : |%#X|\n", num0);
    printf("with wiXth -1  %%-1X : |%-1X|\n", num5);
    printf("with precision -1  %%-.1X : |%-.1X|\n", num5);
    /*음수 wiXth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiXth 0  %%0X : |%0X|\n", num5);
    printf("with precision 0  %%.0X : |%.0X|\n", num5);
    printf("with wiXth 0 & precision 0  %%0.0X : |%0.0X|\n", num5);
    printf("with wiXth 1  %%1X : |%1X|\n", num5);
    printf("with precision 1  %%.1X : |%.1X|\n", num5);
    printf("with wiXth 1 & precision 1  %%1.1X : |%1.1X|\n", num5);
    printf("with wiXth 7  %%7X : |%7X|\n", num5);
    printf("with precision 5  %%.5X : |%.5X|\n", num5);
    printf("with wiXth 7 & precision 5  %%7.5X : |%7.5X|\n", num5);
    printf("with flag #  %%#X : |%#X|\n", num5);

    printf("--------<case %%X, -1234>--------\n");
    printf("single  %%X : |%X|\n", num6);
    printf("with flag +  %%+X : |%+X|\n", num6);
    printf("with flag -  %%-X : |%-X|\n", num6);
    printf("with flag -+  %%+-X : |%-+X|\n", num6);
    printf("with flag +-  %%+-X : |%+-X|\n", num6);
    printf("with flag ' '  %% X : |% X|\n", num6);
    printf("with flag ' '+  %% +X : |% +X|\n", num6);
    printf("with flag ' '-  %% -X : |% -X|\n", num6);
    printf("with flag ' '-+  %% -+X : |% -+X|\n", num6);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num6);
    printf("with flag ' '-+  %% ++X : |% -+X|\n", num6);
    printf("with flag ' '+-  %% +-X : |% +-X|\n", num6);
    printf("with flag +' '  %%+ X : |%+ X|\n", num6);
    printf("with flag -' '  %%- X : |%- X|\n", num6);
    printf("with flag -+' '  %%-+ X : |%-+ X|\n", num6);
    printf("with flag +-' '  %%+- X : |%+- X|\n", num6);
    printf("with flag -+' '  %%++ X : |%-+ X|\n", num6);
    printf("with flag +-' '  %%-- X : |%+- X|\n", num6);
    //# is no effect to %X printf("with flag #  %%#X : |%#X|\n", num0);
    printf("with wiXth -1  %%-1X : |%-1X|\n", num6);
    printf("with precision -1  %%-.1X : |%-.1X|\n", num6);
    /*음수 wiXth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wiXth 0  %%0X : |%0X|\n", num6);
    printf("with precision 0  %%.0X : |%.0X|\n", num6);
    printf("with wiXth 0 & precision 0  %%0.0X : |%0.0X|\n", num6);
    printf("with wiXth 1  %%1X : |%1X|\n", num6);
    printf("with precision 1  %%.1X : |%.1X|\n", num6);
    printf("with wiXth 1 & precision 1  %%1.1X : |%1.1X|\n", num6);
    printf("with wiXth 7  %%7X : |%7X|\n", num6);
    printf("with precision 5  %%.5X : |%.5X|\n", num6);
    printf("with wiXth 7 & precision 5  %%7.5X : |%7.5X|\n", num6);
    printf("with flag #  %%#X : |%#X|\n", num6);

    printf("--------<case %%c, 'a'>--------\n");
    printf("single  %%c : |%c|\n", chr);
    printf("with flag +  %%+c : |%+c|\n", chr);
    printf("with flag -  %%-c : |%-c|\n", chr);
    printf("with flag -+  %%+-c : |%-+c|\n", chr);
    printf("with flag +-  %%+-c : |%+-c|\n", chr);
    printf("with flag ' '  %% c : |% c|\n", chr);
    printf("with flag ' '+  %% +c : |% +c|\n", chr);
    printf("with flag ' '-  %% -c : |% -c|\n", chr);
    printf("with flag ' '-+  %% -+c : |% -+c|\n", chr);
    printf("with flag ' '+-  %% +-c : |% +-c|\n", chr);
    printf("with flag ' '-+  %% ++c : |% -+c|\n", chr);
    printf("with flag ' '+-  %% +-c : |% +-c|\n", chr);
    printf("with flag +' '  %%+ c : |%+ c|\n", chr);
    printf("with flag -' '  %%- c : |%- c|\n", chr);
    printf("with flag -+' '  %%-+ c : |%-+ c|\n", chr);
    printf("with flag +-' '  %%+- c : |%+- c|\n", chr);
    printf("with flag -+' '  %%++ c : |%-+ c|\n", chr);
    printf("with flag +-' '  %%-- c : |%+- c|\n", chr);
    //# is no effect to %c printf("with flag #  %%#c : |%#c|\n", num0);
    printf("with wicth -1  %%-1c : |%-1c|\n", chr);
    printf("with precision -1  %%-.1c : |%-.1c|\n", chr);
    /*음수 wicth는 -기호가 기존의 '-'flag로 인식이 되어서 별 영향없음
    음수 precision은 .-1 이런식 표현은 애초에 없고 -.1은 위와 같이 -플래그로 인식*/
    printf("with wicth 0  %%0c : |%0c|\n", chr);
    printf("with precision 0  %%.0c : |%.0c|\n", chr);
    printf("with wicth 0 & precision 0  %%0.0c : |%0.0c|\n", chr);
    printf("with wicth 1  %%1c : |%1c|\n", chr);
    printf("with precision 1  %%.1c : |%.1c|\n", chr);
    printf("with wicth 1 & precision 1  %%1.1c : |%1.1c|\n", chr);
    printf("with wicth 7  %%7c : |%7c|\n", chr);
    printf("with precision 5  %%.5c : |%.5c|\n", chr);
    printf("with wicth 7 & precision 5  %%7.5c : |%7.5c|\n", chr);
    printf("with flag #  %%#c : |%#c|\n", chr);
}