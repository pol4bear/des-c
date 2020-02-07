#pragma once


typedef unsigned char UBYTE;

// 복호화 함수
// c: 암호문 k: 키 p: 평문
void DES_dec(UBYTE c[8], UBYTE k[7], UBYTE p[8]);
// 암호화 함수
// p: 평문 k: 키 c: 암호문
void DES_enc(UBYTE p[8], UBYTE k[7], UBYTE c[8]);
// 라운드 키 생성 함수
// k: 키 sk: 라운드 키
void key_gen(UBYTE k[7], UBYTE sk[16][6]);

// end of DES.h