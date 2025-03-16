/**
 ****************************************************************************************************
 * @file        atk_ncr.c
 * @author      正点原子团队(ALIENTEK)
 * @version     V1.0
 * @date        2020-04-04
 * @brief       汉字字母识别 代码
 *   @note      数字字母识别程序由正点原子(ALIENTEK)提供, 我们提供2个LIB, 供大家使用
 *              ATKNCR_M_Vx.x.lib和ATKNCR_N_Vx.x.lib的唯一区别是是否使用动态内存分配
 *              其中:
 *              M,代表需要用到malloc的版本,必须实现alientek_ncr_malloc和alientek_ncr_free两个函数
 *              N,代表普通版本,不需要实现alientek_ncr_malloc和alientek_ncr_free两个函数
 *              Vx.x,代表当前识别程序的版本
 *
 *              功能: 支持数字/小写字母/大写字母/混合四种识别模式
 *              本识别程序使用起来相当简单, 步骤如下:
 *              第一步:调用alientek_ncr_init函数,初始化识别程序
 *              第二步:获取输入的点阵数据(必须有2个及以上的不同点阵数据输入)
 *              第三步:调用alientek_ncr函数,得到识别结果
 *              第四步:如果不需要再识别,则调用alientek_ncr_stop函数,终止识别.如果还需要继续,则重复2,3步即可
 *
 * @license     Copyright (c) 2020-2032, 广州市星翼电子科技有限公司
 */

#include "stm32f10x.h"
#include "./ATKNCR/atk_ncr.h"

/**
 * @brief       内存设置函数
 * @param       *p    : 内存首地址
 * @param       c     : 要设置的值
 * @param       len   : 需要设置的内存大小(字节为单位)
 * @retval      无
 */
 
void alientek_ncr_memset(char *p, char c, unsigned long len)
{
    uint8_t *xs = (uint8_t*)p;  // 将 char* 转换为 uint8_t* 指针
    uint8_t value = (uint8_t)c; // 将 char 转换为 uint8_t
    uint32_t count = (uint32_t)len; // 将长度转换为 uint32_t

    // 直接操作内存，逐字节填充
    while (count--) {
        *xs++ = value;
    }
}





















