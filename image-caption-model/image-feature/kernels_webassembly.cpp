
#include <stdlib.h>
#include <math.h>

float static_buffer[28165952];
float* dynamic_buffer = nullptr;

int meta_buf_0[] = {27965248,27764544,50176,3,3,50176};
int meta_buf_1[] = {27764544,24553280,1,3,224,224,112,112,7,7,1,1,2,2,3,3};
int meta_buf_2[] = {24553280,0,27162432,12544,64,147};
int meta_buf_3[] = {9408,9472,27162432,27162432,64,64,64,12544};
int meta_buf_4[] = {27162432,26560320,1,112,112,64,56,56,3,3,2,2,0,0};
int meta_buf_5[] = {26560320,9536,26108736,3136,64,64};
int meta_buf_6[] = {13696,13632,26108736,27764544,64,64,64,3136};
int meta_buf_7[] = {27764544,24553280,1,64,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_8[] = {24553280,13760,27764544,3136,64,576};
int meta_buf_9[] = {50688,50624,27764544,27764544,64,64,64,3136};
int meta_buf_10[] = {27764544,50752,25456448,3136,256,64};
int meta_buf_11[] = {26560320,67136,27162432,3136,256,64};
int meta_buf_12[] = {84032,83776,83520,25456448,27162432,26359616,256,256,3136,256,3136};
int meta_buf_13[] = {26359616,25456448,3136,256,256,3136};
int meta_buf_14[] = {25456448,84288,27764544,3136,64,256};
int meta_buf_15[] = {100736,100672,27764544,27563840,64,64,64,3136};
int meta_buf_16[] = {27563840,24553280,1,64,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_17[] = {24553280,100800,27764544,3136,64,576};
int meta_buf_18[] = {137664,137728,27764544,27563840,64,64,64,3136};
int meta_buf_19[] = {27563840,137792,25456448,3136,256,64};
int meta_buf_20[] = {154176,154432,25456448,26359616,27162432,256,3136,3136,256,3136};
int meta_buf_21[] = {27162432,25456448,3136,256,256,3136};
int meta_buf_22[] = {25456448,154688,26359616,3136,64,256};
int meta_buf_23[] = {171072,171136,26359616,26560320,64,64,64,3136};
int meta_buf_24[] = {26560320,24553280,1,64,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_25[] = {24553280,171200,26560320,3136,64,576};
int meta_buf_26[] = {208064,208128,26560320,26108736,64,64,64,3136};
int meta_buf_27[] = {26108736,208192,24553280,3136,256,64};
int meta_buf_28[] = {224576,224832,27162432,24553280,25456448,3136,256,3136,256,3136};
int meta_buf_29[] = {25456448,27162432,3136,256,256,3136};
int meta_buf_30[] = {27162432,26359616,1,256,56,56,28,28,1,1,1,1,2,2,0,0};
int meta_buf_31[] = {26359616,225088,26259264,784,128,256};
int meta_buf_32[] = {257856,257984,26259264,26259264,128,128,128,784};
int meta_buf_33[] = {26259264,24553280,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_34[] = {24553280,258112,26259264,784,128,1152};
int meta_buf_35[] = {405568,405696,26259264,27764544,128,128,128,784};
int meta_buf_36[] = {27764544,405824,26359616,784,512,128};
int meta_buf_37[] = {25456448,27162432,3136,256,256,3136};
int meta_buf_38[] = {27162432,26761024,1,256,56,56,28,28,1,1,1,1,2,2,0,0};
int meta_buf_39[] = {26761024,471360,25908032,784,512,256};
int meta_buf_40[] = {602432,603456,602944,25908032,26359616,27563840,512,512,784,512,784};
int meta_buf_41[] = {27563840,25908032,784,512,512,784};
int meta_buf_42[] = {25908032,603968,26761024,784,128,512};
int meta_buf_43[] = {669632,669504,26761024,26259264,128,128,128,784};
int meta_buf_44[] = {26259264,24553280,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_45[] = {24553280,669760,26761024,784,128,1152};
int meta_buf_46[] = {817344,817216,26761024,26761024,128,128,128,784};
int meta_buf_47[] = {26761024,817472,25908032,784,512,128};
int meta_buf_48[] = {883008,883520,25908032,27563840,26359616,512,784,784,512,784};
int meta_buf_49[] = {26359616,25908032,784,512,512,784};
int meta_buf_50[] = {25908032,884032,27864896,784,128,512};
int meta_buf_51[] = {949696,949568,27864896,26259264,128,128,128,784};
int meta_buf_52[] = {26259264,24553280,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_53[] = {24553280,949824,27764544,784,128,1152};
int meta_buf_54[] = {1097408,1097280,27764544,27764544,128,128,128,784};
int meta_buf_55[] = {27764544,1097536,25908032,784,512,128};
int meta_buf_56[] = {1163072,1163584,25908032,26359616,27563840,512,784,784,512,784};
int meta_buf_57[] = {27563840,25908032,784,512,512,784};
int meta_buf_58[] = {25908032,1164096,26761024,784,128,512};
int meta_buf_59[] = {1229760,1229632,26761024,26761024,128,128,128,784};
int meta_buf_60[] = {26761024,24553280,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_61[] = {24553280,1229888,26108736,784,128,1152};
int meta_buf_62[] = {1377344,1377472,26108736,26259264,128,128,128,784};
int meta_buf_63[] = {26259264,1377600,27162432,784,512,128};
int meta_buf_64[] = {1443648,1443136,27563840,27162432,25908032,784,512,784,512,784};
int meta_buf_65[] = {25908032,27162432,784,512,512,784};
int meta_buf_66[] = {27162432,27764544,1,512,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_67[] = {27764544,1444160,26309440,196,256,512};
int meta_buf_68[] = {1575232,1575488,26309440,27864896,256,256,256,196};
int meta_buf_69[] = {27864896,25456448,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_70[] = {25456448,1575744,27864896,196,256,2304};
int meta_buf_71[] = {2165568,2165824,27864896,26309440,256,256,256,196};
int meta_buf_72[] = {26309440,2166080,27764544,196,1024,256};
int meta_buf_73[] = {25908032,27162432,784,512,512,784};
int meta_buf_74[] = {27162432,26259264,1,512,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_75[] = {26259264,2428224,26359616,196,1024,512};
int meta_buf_76[] = {2953536,2954560,2952512,26359616,27764544,26108736,1024,1024,196,1024,196};
int meta_buf_77[] = {26108736,25908032,196,1024,1024,196};
int meta_buf_78[] = {25908032,2955584,26309440,196,256,1024};
int meta_buf_79[] = {3217984,3217728,26309440,27864896,256,256,256,196};
int meta_buf_80[] = {27864896,25456448,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_81[] = {25456448,3218240,26309440,196,256,2304};
int meta_buf_82[] = {3808320,3808064,26309440,26309440,256,256,256,196};
int meta_buf_83[] = {26309440,3808576,27764544,196,1024,256};
int meta_buf_84[] = {4071744,4070720,27764544,26108736,26359616,1024,196,196,1024,196};
int meta_buf_85[] = {26359616,25908032,196,1024,1024,196};
int meta_buf_86[] = {25908032,4072768,26309440,196,256,1024};
int meta_buf_87[] = {4335168,4334912,26309440,26309440,256,256,256,196};
int meta_buf_88[] = {26309440,25456448,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_89[] = {25456448,4335424,26309440,196,256,2304};
int meta_buf_90[] = {4925248,4925504,26309440,27864896,256,256,256,196};
int meta_buf_91[] = {27864896,4925760,26108736,196,1024,256};
int meta_buf_92[] = {5187904,5188928,26359616,26108736,27764544,196,1024,196,1024,196};
int meta_buf_93[] = {27764544,26108736,196,1024,1024,196};
int meta_buf_94[] = {26108736,5189952,26761024,196,256,1024};
int meta_buf_95[] = {5452352,5452096,26761024,26309440,256,256,256,196};
int meta_buf_96[] = {26309440,25456448,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_97[] = {25456448,5452608,26761024,196,256,2304};
int meta_buf_98[] = {6042688,6042432,26761024,26309440,256,256,256,196};
int meta_buf_99[] = {26309440,6042944,26108736,196,1024,256};
int meta_buf_100[] = {6306112,6305088,26108736,27764544,25908032,1024,196,196,1024,196};
int meta_buf_101[] = {25908032,26108736,196,1024,1024,196};
int meta_buf_102[] = {26108736,6307136,26309440,196,256,1024};
int meta_buf_103[] = {6569536,6569280,26309440,26309440,256,256,256,196};
int meta_buf_104[] = {26309440,25456448,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_105[] = {25456448,6569792,26309440,196,256,2304};
int meta_buf_106[] = {7159872,7159616,26309440,26309440,256,256,256,196};
int meta_buf_107[] = {26309440,7160128,26108736,196,1024,256};
int meta_buf_108[] = {7422272,7423296,26108736,25908032,27764544,1024,196,196,1024,196};
int meta_buf_109[] = {27764544,26108736,196,1024,1024,196};
int meta_buf_110[] = {26108736,7424320,26761024,196,256,1024};
int meta_buf_111[] = {7686720,7686464,26761024,26309440,256,256,256,196};
int meta_buf_112[] = {26309440,25456448,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_113[] = {25456448,7686976,26761024,196,256,2304};
int meta_buf_114[] = {8276800,8277056,26761024,26309440,256,256,256,196};
int meta_buf_115[] = {26309440,8277312,26108736,196,1024,256};
int meta_buf_116[] = {8539456,8540480,26108736,27764544,26761024,1024,196,196,1024,196};
int meta_buf_117[] = {26761024,26108736,196,1024,1024,196};
int meta_buf_118[] = {26108736,26309440,1,1024,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_119[] = {26309440,8541504,27889984,49,512,1024};
int meta_buf_120[] = {9066304,9065792,27889984,27889984,512,512,512,49};
int meta_buf_121[] = {27889984,25908032,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_122[] = {25908032,9066816,27864896,49,512,4608};
int meta_buf_123[] = {11426112,11426624,27864896,28115776,512,512,512,49};
int meta_buf_124[] = {28115776,11427136,27864896,49,2048,512};
int meta_buf_125[] = {26761024,26108736,196,1024,1024,196};
int meta_buf_126[] = {26108736,26761024,1,1024,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_127[] = {26761024,12475712,26259264,49,2048,1024};
int meta_buf_128[] = {14572864,14576960,14574912,27864896,26259264,27764544,2048,2048,49,2048,49};
int meta_buf_129[] = {27764544,26259264,49,2048,2048,49};
int meta_buf_130[] = {26259264,14579008,27864896,49,512,2048};
int meta_buf_131[] = {15628096,15627584,27864896,27864896,512,512,512,49};
int meta_buf_132[] = {27864896,25908032,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_133[] = {25908032,15628608,27864896,49,512,4608};
int meta_buf_134[] = {17987904,17988416,27864896,27889984,512,512,512,49};
int meta_buf_135[] = {27889984,17988928,26259264,49,2048,512};
int meta_buf_136[] = {19037504,19039552,27764544,26259264,27864896,49,2048,49,2048,49};
int meta_buf_137[] = {27864896,26259264,49,2048,2048,49};
int meta_buf_138[] = {26259264,19041600,28115776,49,512,2048};
int meta_buf_139[] = {20090176,20090688,28115776,28115776,512,512,512,49};
int meta_buf_140[] = {28115776,25908032,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_141[] = {25908032,20091200,28140864,49,512,4608};
int meta_buf_142[] = {22450496,22451008,28140864,28115776,512,512,512,49};
int meta_buf_143[] = {28115776,22451520,26259264,49,2048,512};
int meta_buf_144[] = {23500096,23502144,26259264,27864896,26259264,2048,49,2048,2048,49};
int meta_buf_145[] = {26259264,27892032,1,7,7,2048,1,1,7,7,1,1,0,0};
int meta_buf_146[] = {27892032,27889984,2048};
int meta_buf_147[] = {27889984,23504192,27892032,1,512,2048};
int meta_buf_148[] = {24552768,27892032,27892032,512};
int* meta_buffers[] = {meta_buf_0,meta_buf_1,meta_buf_2,meta_buf_3,meta_buf_4,meta_buf_5,meta_buf_6,meta_buf_7,meta_buf_8,meta_buf_9,meta_buf_10,meta_buf_11,meta_buf_12,meta_buf_13,meta_buf_14,meta_buf_15,meta_buf_16,meta_buf_17,meta_buf_18,meta_buf_19,meta_buf_20,meta_buf_21,meta_buf_22,meta_buf_23,meta_buf_24,meta_buf_25,meta_buf_26,meta_buf_27,meta_buf_28,meta_buf_29,meta_buf_30,meta_buf_31,meta_buf_32,meta_buf_33,meta_buf_34,meta_buf_35,meta_buf_36,meta_buf_37,meta_buf_38,meta_buf_39,meta_buf_40,meta_buf_41,meta_buf_42,meta_buf_43,meta_buf_44,meta_buf_45,meta_buf_46,meta_buf_47,meta_buf_48,meta_buf_49,meta_buf_50,meta_buf_51,meta_buf_52,meta_buf_53,meta_buf_54,meta_buf_55,meta_buf_56,meta_buf_57,meta_buf_58,meta_buf_59,meta_buf_60,meta_buf_61,meta_buf_62,meta_buf_63,meta_buf_64,meta_buf_65,meta_buf_66,meta_buf_67,meta_buf_68,meta_buf_69,meta_buf_70,meta_buf_71,meta_buf_72,meta_buf_73,meta_buf_74,meta_buf_75,meta_buf_76,meta_buf_77,meta_buf_78,meta_buf_79,meta_buf_80,meta_buf_81,meta_buf_82,meta_buf_83,meta_buf_84,meta_buf_85,meta_buf_86,meta_buf_87,meta_buf_88,meta_buf_89,meta_buf_90,meta_buf_91,meta_buf_92,meta_buf_93,meta_buf_94,meta_buf_95,meta_buf_96,meta_buf_97,meta_buf_98,meta_buf_99,meta_buf_100,meta_buf_101,meta_buf_102,meta_buf_103,meta_buf_104,meta_buf_105,meta_buf_106,meta_buf_107,meta_buf_108,meta_buf_109,meta_buf_110,meta_buf_111,meta_buf_112,meta_buf_113,meta_buf_114,meta_buf_115,meta_buf_116,meta_buf_117,meta_buf_118,meta_buf_119,meta_buf_120,meta_buf_121,meta_buf_122,meta_buf_123,meta_buf_124,meta_buf_125,meta_buf_126,meta_buf_127,meta_buf_128,meta_buf_129,meta_buf_130,meta_buf_131,meta_buf_132,meta_buf_133,meta_buf_134,meta_buf_135,meta_buf_136,meta_buf_137,meta_buf_138,meta_buf_139,meta_buf_140,meta_buf_141,meta_buf_142,meta_buf_143,meta_buf_144,meta_buf_145,meta_buf_146,meta_buf_147,meta_buf_148};

extern "C" void init() {
    //static_buffer = (float*)malloc(28165952 * sizeof(float));
}

extern "C" float* get_static_buffer(void) {
    return static_buffer;
}

extern "C" float* allocate_dynamic_buffer(int count) {
    if (dynamic_buffer) {
        free(dynamic_buffer);
        dynamic_buffer = nullptr;
    }
    dynamic_buffer = (float*)malloc(count * sizeof(float));
    return dynamic_buffer;
}

extern "C" float* get_dynamic_buffer(void) {
    return dynamic_buffer;
}
extern "C" void set_placeholder_value(int kernel_order, int offset, int value) {
    meta_buffers[kernel_order][offset] = value;
}

void transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    float * v2 = (static_buffer + meta_buffer[1]);
    const int v3 = meta_buffer[2];
    const int v4 = meta_buffer[3];
    const int D0 = meta_buffer[4];
    const int D1 = meta_buffer[5];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v5 = v1[d0*v3 + d1];
            float v6;
            {
                v6 = v5;
            }
            v2[d0 + d1*v4] = v6;
        }
    }
}


void im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(const int * meta_buffer)
{
    const float *im = (static_buffer + meta_buffer[0]);
    float *col = (static_buffer + meta_buffer[1]);

    const int N = meta_buffer[2];
    const int C1 = meta_buffer[3];
    const int H1 = meta_buffer[4];
    const int W1 = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int DH = meta_buffer[10];
    const int DW = meta_buffer[11];
    const int SH = meta_buffer[12];
    const int SW = meta_buffer[13];
    const int PH = meta_buffer[14];
    const int PW = meta_buffer[15];

    for (int gid = 0; gid < N*H2*W2*KH*KW*C1; gid += 1) {
        const int c1 = gid % C1;
        const int kw = gid / C1 % KW;
        const int kh = gid / C1 / KW % KH;
        const int w2 = gid / C1 / KW / KH % W2;
        const int h2 = gid / C1 / KW / KH / W2 % H2;
        const int  n = gid / C1 / KW / KH / W2 / H2;
        
        const int h1 = h2 * SH - PH + kh * DH;
        const int w1 = w2 * SW - PW + kw * DW;

        col[gid] = (h1 < 0 || h1 >= H1 || w1 < 0 || w1 >= W1) ? 0 : im[((n*H1+h1)*W1+w1)*C1+c1];
    }
}


#ifndef INCLUDE_EIGEN
#define INCLUDE_EIGEN
#include <Eigen/Dense>
#endif

void sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(const int * meta_buffer)
{
    float *A = (static_buffer + meta_buffer[0]);
    float *B = (static_buffer + meta_buffer[1]);
    float *C = (static_buffer + meta_buffer[2]);

    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > a_mat(A, meta_buffer[3], meta_buffer[5]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > b_mat(B, meta_buffer[5], meta_buffer[4]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > c_mat(C, meta_buffer[3], meta_buffer[4]);

    c_mat.noalias() = a_mat * b_mat;
}


void fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int D0 = meta_buffer[6];
    const int D1 = meta_buffer[7];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v7 = v1[d0];
        const float v8 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v3[d0 + d1*v5];
            float v10;
            {
                v10 = v9;
            }
            float v11;
            {
                v11 = v10 * v8;
            }
            float v12;
            {
                v12 = v11 + v7;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            float v14;
            {
                v14 = v13;
            }
            v4[d0 + d1*v6] = v14;
        }
    }
}


void maxpooling2d_6f91142d9d2142f2bf5f971bbd42a9177ff9f0a3847ed38923b3b331(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = -1e7;
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;
            
            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v = v > X[((n * H1 + h1) * W1 + w1) * C + c] ? v : X[((n * H1 + h1) * W1 + w1) * C + c];
            }
        }

        Y[gid] = v;
    }
}


void fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int D0 = meta_buffer[6];
    const int D1 = meta_buffer[7];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v7 = v1[d0];
        const float v8 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v3[d0 + d1*v5];
            float v10;
            {
                v10 = v9;
            }
            float v11;
            {
                v11 = v10 * v7;
            }
            float v12;
            {
                v12 = v11 + v8;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            float v14;
            {
                v14 = v13;
            }
            v4[d0 + d1*v6] = v14;
        }
    }
}


void fusedelementwise_e724fb2ca0fca611734bd3de0192a0689ce349ea322301f080488f48(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v5[d0 + d1*v8];
            float v14;
            {
                v14 = v13;
            }
            float v15;
            {
                v15 = v14 * v11;
            }
            const float v16 = v4[d0 + d1*v7];
            float v17;
            {
                v17 = v16;
            }
            float v18;
            {
                v18 = v17 * v10;
            }
            float v19;
            {
                v19 = v18 + v15;
            }
            float v20;
            {
                v20 = v19 + v12;
            }
            float v21;
            {
                v21 = v20 > 0 ? v20 : 0;
            }
            v6[d0*v9 + d1] = v21;
        }
    }
}


void fusedelementwise_2fdcfe8823dc78ef8d629ce660a0289ed5be8bcb52f17c87e37ae299(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v3[d0 + d1*v6];
            float v12;
            {
                v12 = v11;
            }
            float v13;
            {
                v13 = v12 * v10;
            }
            const float v14 = v4[d0*v7 + d1];
            float v15;
            {
                v15 = v13 + v14;
            }
            float v16;
            {
                v16 = v15 + v9;
            }
            float v17;
            {
                v17 = v16 > 0 ? v16 : 0;
            }
            v5[d0*v8 + d1] = v17;
        }
    }
}


void fusedelementwise_f2b56f0e3b0d2dd2f1c472f775424a5f657a3430f4368b686ea7d3b0(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v4[d0 + d1*v7];
            float v12;
            {
                v12 = v11;
            }
            float v13;
            {
                v13 = v12 * v10;
            }
            const float v14 = v3[d0*v6 + d1];
            float v15;
            {
                v15 = v13 + v14;
            }
            float v16;
            {
                v16 = v15 + v9;
            }
            float v17;
            {
                v17 = v16 > 0 ? v16 : 0;
            }
            v5[d0*v8 + d1] = v17;
        }
    }
}


void fusedelementwise_fe2fcd4104fdce3d16a25a25c591d3ffcddeef22b66b1567ef7af253(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v4[d0 + d1*v7];
            float v14;
            {
                v14 = v13;
            }
            float v15;
            {
                v15 = v14 * v12;
            }
            const float v16 = v5[d0 + d1*v8];
            float v17;
            {
                v17 = v16;
            }
            float v18;
            {
                v18 = v17 * v11;
            }
            float v19;
            {
                v19 = v18 + v15;
            }
            float v20;
            {
                v20 = v19 + v10;
            }
            float v21;
            {
                v21 = v20 > 0 ? v20 : 0;
            }
            v6[d0*v9 + d1] = v21;
        }
    }
}


void fusedelementwise_7350d5b45af0401c79fa17012737c249e54ddc17948856c5cdc50f4f(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v4[d0 + d1*v7];
            float v12;
            {
                v12 = v11;
            }
            float v13;
            {
                v13 = v12 * v9;
            }
            const float v14 = v3[d0*v6 + d1];
            float v15;
            {
                v15 = v13 + v14;
            }
            float v16;
            {
                v16 = v15 + v10;
            }
            float v17;
            {
                v17 = v16 > 0 ? v16 : 0;
            }
            v5[d0*v8 + d1] = v17;
        }
    }
}


void fusedelementwise_669901570452e78c70849d52980628339ce2ae1d747d5ba4bf7f8e7d(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v4[d0 + d1*v7];
            float v14;
            {
                v14 = v13;
            }
            float v15;
            {
                v15 = v14 * v10;
            }
            const float v16 = v5[d0 + d1*v8];
            float v17;
            {
                v17 = v16;
            }
            float v18;
            {
                v18 = v17 * v11;
            }
            float v19;
            {
                v19 = v18 + v15;
            }
            float v20;
            {
                v20 = v19 + v12;
            }
            float v21;
            {
                v21 = v20 > 0 ? v20 : 0;
            }
            v6[d0*v9 + d1] = v21;
        }
    }
}


void fusedelementwise_54029ac1651ba1a744a0a4cb9b0973e183ddbf3b97ff00bf2ac28c7f(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v3[d0 + d1*v6];
            float v12;
            {
                v12 = v11;
            }
            float v13;
            {
                v13 = v12 * v9;
            }
            const float v14 = v4[d0*v7 + d1];
            float v15;
            {
                v15 = v13 + v14;
            }
            float v16;
            {
                v16 = v15 + v10;
            }
            float v17;
            {
                v17 = v16 > 0 ? v16 : 0;
            }
            v5[d0*v8 + d1] = v17;
        }
    }
}


void fusedelementwise_df35442a1805e0716ab8340f6f3d8644ab8597f3ea865f34101c1544(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v5[d0 + d1*v8];
            float v14;
            {
                v14 = v13;
            }
            float v15;
            {
                v15 = v14 * v12;
            }
            const float v16 = v4[d0 + d1*v7];
            float v17;
            {
                v17 = v16;
            }
            float v18;
            {
                v18 = v17 * v11;
            }
            float v19;
            {
                v19 = v18 + v15;
            }
            float v20;
            {
                v20 = v19 + v10;
            }
            float v21;
            {
                v21 = v20 > 0 ? v20 : 0;
            }
            v6[d0*v9 + d1] = v21;
        }
    }
}


void fusedelementwise_35d3e78b86dc7bb6ed7cfbc651a02894d63c1c1ff22008a156f258c3(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v3[d0 + d1*v6];
            float v12;
            {
                v12 = v11;
            }
            float v13;
            {
                v13 = v12 * v10;
            }
            const float v14 = v4[d0*v7 + d1];
            float v15;
            {
                v15 = v13 + v14;
            }
            float v16;
            {
                v16 = v15 + v9;
            }
            float v17;
            {
                v17 = v16 > 0 ? v16 : 0;
            }
            float v18;
            {
                v18 = v17;
            }
            v5[d0 + d1*v8] = v18;
        }
    }
}


void averagepooling2d_0dbf99a782fff01a6fc6f857e42168c01fb90520d3d4151eba450a23(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];
    
    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = 0;
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;
            
            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v += X[((n * H1 + h1) * W1 + w1) * C + c];
            }
        }
        v /= KH * KW;

        Y[gid] = v;
    }
}


void transpose_6c1a5765207ae813be68b295e01081389ed8f452899e3a431cad37f6(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    float * v2 = (static_buffer + meta_buffer[1]);
    const int D0 = meta_buffer[2];
    int d0;
    for (d0 = 0; d0 < D0; d0 += 1) {
        const float v3 = v1[d0];
        float v4;
        {
            v4 = v3;
        }
        v2[d0] = v4;
    }
}


void elementwiseadd_98450d361d3b8b06ad718e1e961bda61506f2baab3157c18aecbf897(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int D0 = meta_buffer[3];
    int d0;
    for (d0 = 0; d0 < D0; d0 += 1) {
        const float v4 = v1[d0];
        const float v5 = v2[d0];
        float v6;
        {
            v6 = v5 + v4;
        }
        v3[d0] = v6;
    }
}

extern "C" void run() {
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_0);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_1);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_2);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_3);
maxpooling2d_6f91142d9d2142f2bf5f971bbd42a9177ff9f0a3847ed38923b3b331(meta_buf_4);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_5);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_6);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_7);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_8);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_9);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_10);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_11);
fusedelementwise_e724fb2ca0fca611734bd3de0192a0689ce349ea322301f080488f48(meta_buf_12);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_13);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_14);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_15);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_16);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_17);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_18);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_19);
fusedelementwise_2fdcfe8823dc78ef8d629ce660a0289ed5be8bcb52f17c87e37ae299(meta_buf_20);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_21);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_22);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_23);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_24);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_25);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_26);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_27);
fusedelementwise_f2b56f0e3b0d2dd2f1c472f775424a5f657a3430f4368b686ea7d3b0(meta_buf_28);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_29);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_30);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_31);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_32);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_33);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_34);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_35);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_36);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_37);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_38);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_39);
fusedelementwise_fe2fcd4104fdce3d16a25a25c591d3ffcddeef22b66b1567ef7af253(meta_buf_40);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_41);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_42);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_43);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_44);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_45);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_46);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_47);
fusedelementwise_2fdcfe8823dc78ef8d629ce660a0289ed5be8bcb52f17c87e37ae299(meta_buf_48);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_49);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_50);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_51);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_52);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_53);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_54);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_55);
fusedelementwise_2fdcfe8823dc78ef8d629ce660a0289ed5be8bcb52f17c87e37ae299(meta_buf_56);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_57);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_58);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_59);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_60);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_61);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_62);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_63);
fusedelementwise_7350d5b45af0401c79fa17012737c249e54ddc17948856c5cdc50f4f(meta_buf_64);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_65);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_66);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_67);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_68);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_69);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_70);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_71);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_72);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_73);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_74);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_75);
fusedelementwise_669901570452e78c70849d52980628339ce2ae1d747d5ba4bf7f8e7d(meta_buf_76);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_77);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_78);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_79);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_80);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_81);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_82);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_83);
fusedelementwise_54029ac1651ba1a744a0a4cb9b0973e183ddbf3b97ff00bf2ac28c7f(meta_buf_84);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_85);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_86);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_87);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_88);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_89);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_90);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_91);
fusedelementwise_f2b56f0e3b0d2dd2f1c472f775424a5f657a3430f4368b686ea7d3b0(meta_buf_92);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_93);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_94);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_95);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_96);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_97);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_98);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_99);
fusedelementwise_54029ac1651ba1a744a0a4cb9b0973e183ddbf3b97ff00bf2ac28c7f(meta_buf_100);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_101);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_102);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_103);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_104);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_105);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_106);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_107);
fusedelementwise_2fdcfe8823dc78ef8d629ce660a0289ed5be8bcb52f17c87e37ae299(meta_buf_108);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_109);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_110);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_111);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_112);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_113);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_114);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_115);
fusedelementwise_2fdcfe8823dc78ef8d629ce660a0289ed5be8bcb52f17c87e37ae299(meta_buf_116);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_117);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_118);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_119);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_120);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_121);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_122);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_123);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_124);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_125);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_126);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_127);
fusedelementwise_df35442a1805e0716ab8340f6f3d8644ab8597f3ea865f34101c1544(meta_buf_128);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_129);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_130);
fusedelementwise_76b9dc92c2fb5c2a9a65e1ad1b5a701bf4a62fb9bf57f1cb528782c1(meta_buf_131);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_132);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_133);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_134);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_135);
fusedelementwise_f2b56f0e3b0d2dd2f1c472f775424a5f657a3430f4368b686ea7d3b0(meta_buf_136);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_137);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_138);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_139);
im2col_1dc147a294d043a7b2199b007777978656dfb88774a7a9bb20a1039c(meta_buf_140);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_141);
fusedelementwise_26dd77e74b458d68edc3d003daf7cf86ada86d3bc47184d7d00922e1(meta_buf_142);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_143);
fusedelementwise_35d3e78b86dc7bb6ed7cfbc651a02894d63c1c1ff22008a156f258c3(meta_buf_144);
averagepooling2d_0dbf99a782fff01a6fc6f857e42168c01fb90520d3d4151eba450a23(meta_buf_145);
transpose_6c1a5765207ae813be68b295e01081389ed8f452899e3a431cad37f6(meta_buf_146);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_147);
elementwiseadd_98450d361d3b8b06ad718e1e961bda61506f2baab3157c18aecbf897(meta_buf_148);

}

