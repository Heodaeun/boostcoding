{"filter":false,"title":"mission02_2.c","tooltip":"/week7_mission/mission02_2.c","undoManager":{"mark":13,"position":13,"stack":[[{"start":{"row":0,"column":0},"end":{"row":52,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <stdlib.h>","#include <stdbool.h>","","int *divisor;   //숫자N의 약수들이 담긴 int 배열","","int compare(const void * a, const void * b)","{","    return (*(int*)a - *(int*)b);","}","","int result(int N){","    int Num = 4;    //답은 최소 4부터 가능.","","    bool check = false;","    bool check2 = false;","","    while(check == false){","        for(int i = 0; i < N; i++){","            if(Num % divisor[i] == 0 && Num != divisor[i]){","                check2 = true;","            }else{","                Num++;","                check2 = false;","                break;","            }","        }","        if(check2 == true){","            check = true;","        }","    }","    return Num;","}","","int main() {","    int N;  //숫자N의 약수의 개수","    scanf(\"%d\", &N);","","    divisor = malloc(sizeof(int) * N);","","    for(int i = 0; i < N; i++){","        int tmp;","        scanf(\"%d\", &tmp);  //숫자N의 약수들을 모두 받아옴","        divisor[i] = tmp;","    }","","    qsort(divisor, N, sizeof(int), compare);","","    int answer = result(N);","    printf(\"%d\\n\", answer);","","    return 0;","}"],"id":1}],[{"start":{"row":10,"column":0},"end":{"row":33,"column":0},"action":"remove","lines":["","int result(int N){","    int Num = 4;    //답은 최소 4부터 가능.","","    bool check = false;","    bool check2 = false;","","    while(check == false){","        for(int i = 0; i < N; i++){","            if(Num % divisor[i] == 0 && Num != divisor[i]){","                check2 = true;","            }else{","                Num++;","                check2 = false;","                break;","            }","        }","        if(check2 == true){","            check = true;","        }","    }","    return Num;","}",""],"id":2}],[{"start":{"row":25,"column":17},"end":{"row":25,"column":27},"action":"remove","lines":["result(N);"],"id":3}],[{"start":{"row":25,"column":17},"end":{"row":25,"column":18},"action":"insert","lines":["r"],"id":4}],[{"start":{"row":25,"column":17},"end":{"row":25,"column":18},"action":"remove","lines":["r"],"id":5}],[{"start":{"row":25,"column":17},"end":{"row":25,"column":18},"action":"insert","lines":["d"],"id":6},{"start":{"row":25,"column":18},"end":{"row":25,"column":19},"action":"insert","lines":["i"]},{"start":{"row":25,"column":19},"end":{"row":25,"column":20},"action":"insert","lines":["v"]},{"start":{"row":25,"column":20},"end":{"row":25,"column":21},"action":"insert","lines":["i"]},{"start":{"row":25,"column":21},"end":{"row":25,"column":22},"action":"insert","lines":["s"]},{"start":{"row":25,"column":22},"end":{"row":25,"column":23},"action":"insert","lines":["o"]},{"start":{"row":25,"column":23},"end":{"row":25,"column":24},"action":"insert","lines":["r"]}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":26},"action":"insert","lines":["[]"],"id":7}],[{"start":{"row":25,"column":25},"end":{"row":25,"column":26},"action":"insert","lines":["0"],"id":8}],[{"start":{"row":25,"column":27},"end":{"row":25,"column":28},"action":"insert","lines":["*"],"id":9},{"start":{"row":25,"column":28},"end":{"row":25,"column":29},"action":"insert","lines":["d"]},{"start":{"row":25,"column":29},"end":{"row":25,"column":30},"action":"insert","lines":["i"]},{"start":{"row":25,"column":30},"end":{"row":25,"column":31},"action":"insert","lines":["v"]},{"start":{"row":25,"column":31},"end":{"row":25,"column":32},"action":"insert","lines":["i"]},{"start":{"row":25,"column":32},"end":{"row":25,"column":33},"action":"insert","lines":["s"]},{"start":{"row":25,"column":33},"end":{"row":25,"column":34},"action":"insert","lines":["o"]},{"start":{"row":25,"column":34},"end":{"row":25,"column":35},"action":"insert","lines":["r"]}],[{"start":{"row":25,"column":35},"end":{"row":25,"column":37},"action":"insert","lines":["[]"],"id":10}],[{"start":{"row":25,"column":36},"end":{"row":25,"column":37},"action":"insert","lines":["N"],"id":11},{"start":{"row":25,"column":37},"end":{"row":25,"column":38},"action":"insert","lines":["-"]},{"start":{"row":25,"column":38},"end":{"row":25,"column":39},"action":"insert","lines":["1"]}],[{"start":{"row":25,"column":40},"end":{"row":25,"column":41},"action":"insert","lines":[";"],"id":12}],[{"start":{"row":25,"column":27},"end":{"row":25,"column":28},"action":"insert","lines":[" "],"id":13}],[{"start":{"row":25,"column":29},"end":{"row":25,"column":30},"action":"insert","lines":[" "],"id":14}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":28,"column":13},"end":{"row":28,"column":13},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1598883998979,"hash":"ff899fcf573c7360c141ce4dab0638149f6140c7"}