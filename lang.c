#define L_ADD 0
#define L_SUB 1
#define L_MUL 2
#define L_DIV 3
#define L_SQRT 4
#define L_AND 5
#define L_OR 6
#define L_NOT 7
#define L_XOR 8
#define L_NUM 9
#define L_INS 10
#define L_OPN 11
#define L_CLS 12

struct lang_transition {
    unsigned char *data;
    unsigned int dataLen;
}

void *calc() {
    
