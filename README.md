# ft_printf

## 1️⃣ 프로젝트 소개

ft_printf는 C 언어의 표준 출력 함수 printf()를 직접 구현하는 프로젝트입니다.
이 과제는 단순히 문자열을 출력하는 함수를 만드는 것을 넘어, 가변 인자 처리, 문자열 파싱, 숫자 변환 알고리즘, 플래그 및 포맷 옵션 지원 등을 직접 구현하면서 표준 라이브러리 함수 내부의 동작 방식을 깊이 이해하는 데 초점을 맞추고 있습니다.

특히 bonus 구현을 통해 단순 출력에서 한 단계 나아가, 다양한 출력 옵션을 결합하여 실제 printf()와 유사한 수준의 기능을 구현했습니다.

---

# 2️⃣ 과제 목표
	•	printf() 함수의 동작 원리 이해 및 재구현
	•	가변 인자(variadic arguments) 처리 (stdarg.h의 va_list, va_start, va_arg, va_end)
	•	문자열 파싱 로직을 통한 포맷 문자열 해석
	•	다양한 데이터 타입 변환 및 출력 규칙 구현
	•	보너스 파트로 확장하여 플래그, width, precision, 변환자 조합 처리

---

# 3️⃣ 구현 사항

## ✅ 기본 구현 변환자
	•	%c : 단일 문자 출력
	•	%s : 문자열 출력 (NULL 처리 포함)
	•	%p : 포인터 주소를 16진수로 출력 (0x 접두사 포함)
	•	%d, %i : 부호 있는 10진수 정수 출력
	•	%u : 부호 없는 10진수 정수 출력
	•	%x, %X : 16진수 출력 (소문자/대문자 선택)
	•	%% : % 자체 출력

## ✅ 보너스 구현 확장 기능
* 플래그 지원
   - '-' : 왼쪽 정렬
   - '0' : 0으로 패딩
   - '#' : 접두사 출력 (예: 0x, 0X)
   - '+' : 양수일 경우 + 출력
   - 공백( ) : 양수일 경우 앞에 공백 출력
* 폭(width) & 정밀도(precision)
  	- 최소 출력 폭 지정
  	- 정밀도에 따른 소수점 이하 자릿수 및 문자열 자르기 처리
  	- 정수 출력 시 precision이 0이면 0을 출력하지 않는 케이스 처리
* 플래그 + 변환자 조합 처리
	- '0' 플래그와 precision 충돌 시 예외 처리
 	- '-' 플래그와 width 동작 우선순위
	- '#' 플래그와 %x, %X 변환자의 접두사 처리
	- '+' 또는 공백 플래그와 정수 출력의 상호작용

---

# 4️⃣ 배운 점
	•	stdarg.h를 활용한 가변 인자 함수 작성 방법
	•	문자열 파싱을 통한 토큰화 및 상태 기반 로직 설계 경험
	•	정수 → 문자열 변환(itoa, itoa_unsigned, itoa_hex) 알고리즘 직접 구현
	•	다양한 예외 케이스(예: printf("%5.0d", 0)) 처리 과정에서 경계 조건 설계 능력 향상
	•	플래그와 옵션이 겹칠 때 우선순위를 정의하고 처리하는 복합 로직 구현 경험

---

# 5️⃣ 사용 방법

## 📦 라이브러리 빌드
### bash
```
make        # 기본 라이브러리 빌드
make bonus  # bonus 구현 포함 빌드
```
빌드 후 libftprintf.a 정적 라이브러리가 생성됩니다.

### 🖥️ 사용 예시 (메인 코드와 링크)

c
```
#include "ft_printf.h"

int main(void)
{
	int num = 42;
	char *str = "Hello, ft_printf!";

	ft_printf("Decimal: %d\n", num);
	ft_printf("Hex (with # flag): %#x\n", num);
	ft_printf("String (width 20): %20s\n", str);
	ft_printf("Pointer: %p\n", str);
	ft_printf("Signed with +: %+d\n", num);
	return 0;
}
```
### ⏯️ 컴파일 & 실행

bash
```
gcc main.c -L. -lftprintf -o main
./main
```
### 출력:
```
Decimal: 42
Hex (with # flag): 0x2a
String (width 20):     Hello, ft_printf!
Pointer: 0x7ffeefbff5d0
Signed with +: +42
```

---

# 6️⃣ 기술 스택
	•	언어: C
	•	빌드 도구: Makefile (GNU make)
	•	헤더/라이브러리: stdarg.h, unistd.h
