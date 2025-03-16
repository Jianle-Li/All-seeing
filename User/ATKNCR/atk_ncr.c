/**
 ****************************************************************************************************
 * @file        atk_ncr.c
 * @author      ����ԭ���Ŷ�(ALIENTEK)
 * @version     V1.0
 * @date        2020-04-04
 * @brief       ������ĸʶ�� ����
 *   @note      ������ĸʶ�����������ԭ��(ALIENTEK)�ṩ, �����ṩ2��LIB, �����ʹ��
 *              ATKNCR_M_Vx.x.lib��ATKNCR_N_Vx.x.lib��Ψһ�������Ƿ�ʹ�ö�̬�ڴ����
 *              ����:
 *              M,������Ҫ�õ�malloc�İ汾,����ʵ��alientek_ncr_malloc��alientek_ncr_free��������
 *              N,������ͨ�汾,����Ҫʵ��alientek_ncr_malloc��alientek_ncr_free��������
 *              Vx.x,����ǰʶ�����İ汾
 *
 *              ����: ֧������/Сд��ĸ/��д��ĸ/�������ʶ��ģʽ
 *              ��ʶ�����ʹ�������൱��, ��������:
 *              ��һ��:����alientek_ncr_init����,��ʼ��ʶ�����
 *              �ڶ���:��ȡ����ĵ�������(������2�������ϵĲ�ͬ������������)
 *              ������:����alientek_ncr����,�õ�ʶ����
 *              ���Ĳ�:�������Ҫ��ʶ��,�����alientek_ncr_stop����,��ֹʶ��.�������Ҫ����,���ظ�2,3������
 *
 * @license     Copyright (c) 2020-2032, ������������ӿƼ����޹�˾
 */

#include "stm32f10x.h"
#include "./ATKNCR/atk_ncr.h"

/**
 * @brief       �ڴ����ú���
 * @param       *p    : �ڴ��׵�ַ
 * @param       c     : Ҫ���õ�ֵ
 * @param       len   : ��Ҫ���õ��ڴ��С(�ֽ�Ϊ��λ)
 * @retval      ��
 */
 
void alientek_ncr_memset(char *p, char c, unsigned long len)
{
    uint8_t *xs = (uint8_t*)p;  // �� char* ת��Ϊ uint8_t* ָ��
    uint8_t value = (uint8_t)c; // �� char ת��Ϊ uint8_t
    uint32_t count = (uint32_t)len; // ������ת��Ϊ uint32_t

    // ֱ�Ӳ����ڴ棬���ֽ����
    while (count--) {
        *xs++ = value;
    }
}





















