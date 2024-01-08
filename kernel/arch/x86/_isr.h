// SPDX-FileCopyrightText: (c) 2023 Inseo Oh <dhdlstjtr@gmail.com>
//
// SPDX-License-Identifier: BSD-2-Clause
#include <kernel/utility/utility.h>

struct TrapFrame;

typedef void(isr_exception_handler_t)(struct TrapFrame *);
typedef void(isr_entry_t)(void);

isr_exception_handler_t isr_exc0_handler, isr_exc1_handler, isr_exc2_handler,
        isr_exc3_handler, isr_exc4_handler, isr_exc5_handler, isr_exc6_handler,
        isr_exc7_handler, isr_exc8_handler, isr_exc9_handler, isr_exc10_handler,
        isr_exc11_handler, isr_exc12_handler, isr_exc13_handler,
        isr_exc14_handler, isr_exc15_handler, isr_exc16_handler,
        isr_exc17_handler, isr_exc18_handler, isr_exc19_handler,
        isr_exc20_handler, isr_exc21_handler, isr_exc22_handler,
        isr_exc23_handler, isr_exc24_handler, isr_exc25_handler,
        isr_exc26_handler, isr_exc27_handler, isr_exc28_handler,
        isr_exc29_handler, isr_exc30_handler, isr_exc31_handler;

void isr_handle_interrupt(struct TrapFrame *frm, uint64_t int_num);

isr_entry_t isr_exc0_entry, isr_exc1_entry, isr_exc2_entry, isr_exc3_entry,
        isr_exc4_entry, isr_exc5_entry, isr_exc6_entry, isr_exc7_entry,
        isr_exc8_entry, isr_exc9_entry, isr_exc10_entry, isr_exc11_entry,
        isr_exc12_entry, isr_exc13_entry, isr_exc14_entry, isr_exc15_entry,
        isr_exc16_entry, isr_exc17_entry, isr_exc18_entry, isr_exc19_entry,
        isr_exc20_entry, isr_exc21_entry, isr_exc22_entry, isr_exc23_entry,
        isr_exc24_entry, isr_exc25_entry, isr_exc26_entry, isr_exc27_entry,
        isr_exc28_entry, isr_exc29_entry, isr_exc30_entry, isr_exc31_entry,
        isr_int32_entry, isr_int33_entry, isr_int34_entry, isr_int35_entry,
        isr_int36_entry, isr_int37_entry, isr_int38_entry, isr_int39_entry,
        isr_int40_entry, isr_int41_entry, isr_int42_entry, isr_int43_entry,
        isr_int44_entry, isr_int45_entry, isr_int46_entry, isr_int47_entry,
        isr_int48_entry, isr_int49_entry, isr_int50_entry, isr_int51_entry,
        isr_int52_entry, isr_int53_entry, isr_int54_entry, isr_int55_entry,
        isr_int56_entry, isr_int57_entry, isr_int58_entry, isr_int59_entry,
        isr_int60_entry, isr_int61_entry, isr_int62_entry, isr_int63_entry,
        isr_int64_entry, isr_int65_entry, isr_int66_entry, isr_int67_entry,
        isr_int68_entry, isr_int69_entry, isr_int70_entry, isr_int71_entry,
        isr_int72_entry, isr_int73_entry, isr_int74_entry, isr_int75_entry,
        isr_int76_entry, isr_int77_entry, isr_int78_entry, isr_int79_entry,
        isr_int80_entry, isr_int81_entry, isr_int82_entry, isr_int83_entry,
        isr_int84_entry, isr_int85_entry, isr_int86_entry, isr_int87_entry,
        isr_int88_entry, isr_int89_entry, isr_int90_entry, isr_int91_entry,
        isr_int92_entry, isr_int93_entry, isr_int94_entry, isr_int95_entry,
        isr_int96_entry, isr_int97_entry, isr_int98_entry, isr_int99_entry,
        isr_int100_entry, isr_int101_entry, isr_int102_entry, isr_int103_entry,
        isr_int104_entry, isr_int105_entry, isr_int106_entry, isr_int107_entry,
        isr_int108_entry, isr_int109_entry, isr_int110_entry, isr_int111_entry,
        isr_int112_entry, isr_int113_entry, isr_int114_entry, isr_int115_entry,
        isr_int116_entry, isr_int117_entry, isr_int118_entry, isr_int119_entry,
        isr_int120_entry, isr_int121_entry, isr_int122_entry, isr_int123_entry,
        isr_int124_entry, isr_int125_entry, isr_int126_entry, isr_int127_entry,
        isr_int128_entry, isr_int129_entry, isr_int130_entry, isr_int131_entry,
        isr_int132_entry, isr_int133_entry, isr_int134_entry, isr_int135_entry,
        isr_int136_entry, isr_int137_entry, isr_int138_entry, isr_int139_entry,
        isr_int140_entry, isr_int141_entry, isr_int142_entry, isr_int143_entry,
        isr_int144_entry, isr_int145_entry, isr_int146_entry, isr_int147_entry,
        isr_int148_entry, isr_int149_entry, isr_int150_entry, isr_int151_entry,
        isr_int152_entry, isr_int153_entry, isr_int154_entry, isr_int155_entry,
        isr_int156_entry, isr_int157_entry, isr_int158_entry, isr_int159_entry,
        isr_int160_entry, isr_int161_entry, isr_int162_entry, isr_int163_entry,
        isr_int164_entry, isr_int165_entry, isr_int166_entry, isr_int167_entry,
        isr_int168_entry, isr_int169_entry, isr_int170_entry, isr_int171_entry,
        isr_int172_entry, isr_int173_entry, isr_int174_entry, isr_int175_entry,
        isr_int176_entry, isr_int177_entry, isr_int178_entry, isr_int179_entry,
        isr_int180_entry, isr_int181_entry, isr_int182_entry, isr_int183_entry,
        isr_int184_entry, isr_int185_entry, isr_int186_entry, isr_int187_entry,
        isr_int188_entry, isr_int189_entry, isr_int190_entry, isr_int191_entry,
        isr_int192_entry, isr_int193_entry, isr_int194_entry, isr_int195_entry,
        isr_int196_entry, isr_int197_entry, isr_int198_entry, isr_int199_entry,
        isr_int200_entry, isr_int201_entry, isr_int202_entry, isr_int203_entry,
        isr_int204_entry, isr_int205_entry, isr_int206_entry, isr_int207_entry,
        isr_int208_entry, isr_int209_entry, isr_int210_entry, isr_int211_entry,
        isr_int212_entry, isr_int213_entry, isr_int214_entry, isr_int215_entry,
        isr_int216_entry, isr_int217_entry, isr_int218_entry, isr_int219_entry,
        isr_int220_entry, isr_int221_entry, isr_int222_entry, isr_int223_entry,
        isr_int224_entry, isr_int225_entry, isr_int226_entry, isr_int227_entry,
        isr_int228_entry, isr_int229_entry, isr_int230_entry, isr_int231_entry,
        isr_int232_entry, isr_int233_entry, isr_int234_entry, isr_int235_entry,
        isr_int236_entry, isr_int237_entry, isr_int238_entry, isr_int239_entry,
        isr_int240_entry, isr_int241_entry, isr_int242_entry, isr_int243_entry,
        isr_int244_entry, isr_int245_entry, isr_int246_entry, isr_int247_entry,
        isr_int248_entry, isr_int249_entry, isr_int250_entry, isr_int251_entry,
        isr_int252_entry, isr_int253_entry, isr_int254_entry, isr_int255_entry;
