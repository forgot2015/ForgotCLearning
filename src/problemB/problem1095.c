//
// Created by forgot on 2019-08-04.
//
/*1095 解码PAT准考证 (25 point(s))*/
/*PAT 准考证号由 4 部分组成：

第 1 位是级别，即 T 代表顶级；A 代表甲级；B 代表乙级；
第 2~4 位是考场编号，范围从 101 到 999；
第 5~10 位是考试日期，格式为年、月、日顺次各占 2 位；
最后 11~13 位是考生编号，范围从 000 到 999。
现给定一系列考生的准考证号和他们的成绩，请你按照要求输出各种统计信息。

输入格式：
输入首先在一行中给出两个正整数 N（≤10^4）和 M（≤100），分别为考生人数和统计要求的个数。

接下来 N 行，每行给出一个考生的准考证号和其分数（在区间 [0,100] 内的整数），其间以空格分隔。

考生信息之后，再给出 M 行，每行给出一个统计要求，格式为：类型 指令，其中

类型 为 1 表示要求按分数非升序输出某个指定级别的考生的成绩，对应的 指令 则给出代表指定级别的字母；
类型 为 2 表示要求将某指定考场的考生人数和总分统计输出，对应的 指令 则给出指定考场的编号；
类型 为 3 表示要求将某指定日期的考生人数分考场统计输出，对应的 指令 则给出指定日期，格式与准考证上日期相同。
输出格式：
对每项统计要求，首先在一行中输出 Case #: 要求，其中 # 是该项要求的编号，从 1 开始；要求 即复制输入给出的要求。随后输出相应的统计结果：

类型 为 1 的指令，输出格式与输入的考生信息格式相同，即 准考证号 成绩。对于分数并列的考生，按其准考证号的字典序递增输出（题目保证无重复准考证号）；
类型 为 2 的指令，按 人数 总分 的格式输出；
类型 为 3 的指令，输出按人数非递增顺序，格式为 考场编号 总人数。若人数并列则按考场编号递增顺序输出。
如果查询结果为空，则输出 NA。

输入样例：
8 4
B123180908127 99
B102180908003 86
A112180318002 98
T107150310127 62
A107180908108 100
T123180908010 78
B112160918035 88
A107180908021 98
1 A
2 107
3 180908
2 999

输出样例：
Case 1: 1 A
A107180908108 100
A107180908021 98
A112180318002 98
Case 2: 2 107
3 260
Case 3: 3 180908
107 2
123 2
102 1
Case 4: 2 999
NA*/

//#include "stdio.h"
//#include "string.h"
//#include "stdlib.h"
//
//typedef struct PatStus {
//    char num[20];
//    int score;
//    char level;
//    char room[4];
//    char date[7];
//    char no[4];
//} PatStu;
//
//typedef struct DateStuds {
//    int room;
//    int count;
//} DateStud;
//
//int cmp(const void *a, const void *b) {
//    PatStu stuA = *(PatStu *) a;
//    PatStu stuB = *(PatStu *) b;
//    if (stuB.score - stuA.score) {
//        return stuB.score - stuA.score;
//    }
//
//    return strcmp(stuA.num, stuB.num);
//}
//
//int cmpByRoom(const void *a, const void *b) {
//    DateStud stuA = *(DateStud *) a;
//    DateStud stuB = *(DateStud *) b;
//    if (stuA.count == stuB.count) {
//        return stuA.room - stuB.room;
//    }
//
//    return stuB.count - stuA.count;
//}
//
//int main() {
//    int N, M;
//    scanf("%d %d", &N, &M);
//    PatStu stu[N];
//    for (int i = 0; i < N; i++) {
//        scanf("%s %d", stu[i].num, &stu[i].score);
//        sscanf(stu[i].num, "%1c%3s%6s%3s", &stu[i].level,
//               stu[i].room, stu[i].date,
//               stu[i].no);
//    }
//
////    按分数和考号排名
//    qsort(stu, N, sizeof(stu[0]), cmp);
//
//    for (int j = 0; j < M; j++) {
//        int caseNum;
//        char value[7];
//        scanf("%d %s", &caseNum, value);
//
//        printf("Case %d: %d %s\n", j + 1, caseNum, value);
//        if (caseNum == 1) {
//            int stuCount = 0;
//            for (int i = 0; i < N; i++) {
//                if (stu[i].level == value[0]) {
//                    printf("%s %d\n", stu[i].num, stu[i].score);
//                    stuCount++;
//                }
//            }
//            if (!stuCount) {
//                printf("NA\n");
//            }
//        } else if (caseNum == 2) {
//            int stuCount = 0;
//            int scoreSum = 0;
//            for (int i = 0; i < N; i++) {
//                if (strcmp(stu[i].room, value) == 0) {
//                    stuCount++;
//                    scoreSum += stu[i].score;
//                }
//            }
//            if (stuCount) {
//                printf("%d %d\n", stuCount, scoreSum);
//            } else {
//                printf("NA\n");
//            }
//        } else if (caseNum == 3) {
//            DateStud roomStu[N];
//            int stuCount = 0;
//            int roomCount[1000] = {0};
////            计算各考场的考生人数
//            for (int i = 0; i < N; i++) {
//                if (strcmp(stu[i].date, value) == 0) {
//                    roomCount[atoi(stu[i].room)]++;
//                }
//            }
//        //将考场号和考生人数转移到结构体中，方便人数排序
//            for (int k = 0; k < 1000; k++) {
//                if (roomCount[k]) {
//                    roomStu[stuCount].room = k;
//                    roomStu[stuCount].count = roomCount[k];
//                    stuCount++;
//                }
//            }
//
//            qsort(roomStu, stuCount, sizeof(roomStu[0]), cmpByRoom);
//
//            if (stuCount) {
//                for (int i = 0; i < stuCount; i++) {
//                    printf("%d %d\n", roomStu[i].room, roomStu[i].count);
//                }
//            } else {
//                printf("NA\n");
//            }
//        }
//    }
//
//    return 0;
//}


//更惨，错两个用例
//#include "stdio.h"
//#include "string.h"
//#include "stdlib.h"
//
//typedef struct PatStus {
//    char num[15];
//    int score;
//    char level[2];
//    int room;
//    int date;
//    int no;
//} PatStu;
//
//typedef struct {
//    int room;
//    int stuCount;
//} RoomStu;
//
//int cmpRoom(const void *a, const void *b) {
//    RoomStu A = *(RoomStu *) a;
//    RoomStu B = *(RoomStu *) b;
////    考生人数相等时，考场从小到大排序
//    if (A.stuCount == B.stuCount) {
//        return A.room - B.room;
//    } else {
//        return B.stuCount - A.stuCount;
//    }
//}
//
//int cmp(const void *a, const void *b) {
//    PatStu stuA = *(PatStu *) a;
//    PatStu stuB = *(PatStu *) b;
//    if (stuB.score == stuA.score) {
////        分数相等时，按考号从小到大排行
//        return strcmp(stuA.num, stuB.num);
//    } else {
////        学生分数从大到小排行
//        return stuB.score - stuA.score;
//    }
//}
//
//int main() {
//    int N, M;
//    scanf("%d %d", &N, &M);
//    PatStu stu[N];
//    for (int i = 0; i < N; i++) {
//        scanf("%s %d", stu[i].num, &stu[i].score);
////        解析输入的字符串
//        sscanf(stu[i].num, "%1s%3d%6d%3d", stu[i].level,
//               &stu[i].room, &stu[i].date,
//               &stu[i].no);
//    }
////    按分数和考号排名
//    qsort(stu, N, sizeof(stu[0]), cmp);
//
//    for (int j = 0; j < M; j++) {
//        int caseNum;
//        scanf("%d", &caseNum);
//
//        if (caseNum == 1) {
//            //输出某个指定级别的考生
//            char level[2];
//            scanf(" %s", level);
//            printf("Case %d: %d %s\n", j + 1, caseNum, level);
//            int stuCount = 0;
//            for (int i = 0; i < N; i++) {
//                if (strcmp(stu[i].level, level) == 0) {
//                    printf("%s %d\n", stu[i].num, stu[i].score);
//                    stuCount++;
//                }
//            }
//            if (!stuCount) {
//                printf("NA\n");
//            }
//        } else if (caseNum == 2) {
//            //将某指定考场的考生人数和总分统计输出
//            int room;
//            scanf(" %d", &room);
//            printf("Case %d: %d %d\n", j + 1, caseNum, room);
//            int stuCount = 0;
//            int scoreSum = 0;
//            for (int i = 0; i < N; i++) {
//                if (stu[i].room == room) {
//                    stuCount++;
//                    scoreSum += stu[i].score;
//                }
//            }
//            if (stuCount) {
//                printf("%d %d\n", stuCount, scoreSum);
//            } else {
//                printf("NA\n");
//            }
//        } else if (caseNum == 3) {
//            //将某指定日期的考生人数分考场统计输出
//            int date;
//            scanf(" %d", &date);
//            printf("Case %d: %d %d\n", j + 1, caseNum, date);
//
//            RoomStu roomStu[N];
//            int stuCount = 0;
//            int roomCount[1000] = {0};
//            for (int i = 0; i < N; i++) {
//                if (stu[i].date == date) {
//                    roomCount[stu[i].room]++;
//                }
//            }
//
//            for (int k = 0; k < 1000; k++) {
//                if (roomCount[k]) {
//                    roomStu[stuCount].room = k;
//                    roomStu[stuCount].stuCount = roomCount[k];
//                    stuCount++;
//                }
//            }
//
//            qsort(roomStu, stuCount, sizeof(roomStu[0]), cmpRoom);
//
//            if (stuCount) {
//                for (int i = 0; i < stuCount; i++) {
//                    printf("%d %d\n", roomStu[i].room, roomStu[i].stuCount);
//                }
//            } else {
//                printf("NA\n");
//            }
//        }
//    }
//
//    return 0;
//}



//有一个用例超时了
//#include "stdio.h"
//#include "string.h"
//#include "stdlib.h"
//
//typedef struct PatStus {
//    char level;
//    char room[4];
//    char date[7];
//    char num[20];
//    char no[4];
//    int score;
//} PatStu;
//
//typedef struct DateStuds {
//    char room[7];
//    int count;
//} DateStud;
//
//int cmp(const void *a, const void *b) {
//    PatStu stuA = *(PatStu *) a;
//    PatStu stuB = *(PatStu *) b;
//    if (stuB.score - stuA.score) {
//        return stuB.score - stuA.score;
//    }
//
//    return strcmp(stuA.num, stuB.num);
//}
//
//int cmpByRoom(const void *a, const void *b) {
//    DateStud stuA = *(DateStud *) a;
//    DateStud stuB = *(DateStud *) b;
//    if (stuA.count == stuB.count) {
//        return strcmp(stuA.room, stuB.room);
//    }
//
//    return stuB.count - stuA.count;
//}
//
//int main() {
//    int N, M;
//    scanf("%d %d", &N, &M);
//    PatStu stu[N];
////    PatStu *patStu = stu;
//    for (int i = 0; i < N; i++) {
////        char str[20];
//        int score;
//        scanf("%s %d", stu[i].num, &score);
//        sscanf(stu[i].num, "%1c%3s%6s%3s", &stu[i].level,
//               stu[i].room, stu[i].date,
//               stu[i].no);
//
////        stu[i].level = str[0];
////        strncpy(stu[i].room, str + 1, 3);
////        strncpy(stu[i].date, str + 4, 6);
////        strcpy(stu[i].num, str);
//        stu[i].score = score;
////        printf("stu[%d].room = %s\n", i, stu[i].room);
////        printf("stu[%d].date = %s\n", i, stu[i].date);
//    }
//
////    按分数和考号排名
//    qsort(stu, N, sizeof(stu[0]), cmp);
//
////    for (int k = 0; k <N ; k++) {
//////        printf("%s\n",stu[k].num);
//////    }
//
//    for (int j = 0; j < M; j++) {
//        int caseNum;
//        char value[7];
//        scanf("%d %s", &caseNum, value);
//
//        printf("Case %d: %d %s\n", j + 1, caseNum, value);
//        if (caseNum == 1) {
//            int stuCount = 0;
//            for (int i = 0; i < N; i++) {
//                if (stu[i].level == value[0]) {
//                    printf("%s %d\n", stu[i].num, stu[i].score);
//                    stuCount++;
//                }
//            }
//            if (!stuCount) {
//                printf("NA\n");
//            }
//        } else if (caseNum == 2) {
//            int stuCount = 0;
//            int scoreSum = 0;
//            for (int i = 0; i < N; i++) {
//                if (strcmp(stu[i].room, value) == 0) {
//                    stuCount++;
//                    scoreSum += stu[i].score;
//                }
//            }
//            if (stuCount) {
//                printf("%d %d\n", stuCount, scoreSum);
//            } else {
//                printf("NA\n");
//            }
//        } else if (caseNum == 3) {
//            DateStud dateStud[10001] = {"-1", 0};
//            int stuCount = 0;
//            for (int i = 0; i < N; i++) {
//                if (strcmp(stu[i].date, value) == 0) {
//
//                    int hasSame = 0;
//                    for (int k = 0; k < stuCount; k++) {
//                        if (strcmp(dateStud[k].room, stu[i].room) == 0) {
////                            strcpy(dateStud[stuCount].room, stu[i].room);
//                            ++dateStud[k].count;
//                            hasSame = 1;
//                            break;
//                        }
//                    }
//
//                    if (!hasSame) {
//                        strcpy(dateStud[stuCount].room, stu[i].room);
//                        ++dateStud[stuCount].count;
//                        stuCount++;
//                    }
//                }
//            }
//
//            qsort(dateStud, N, sizeof(dateStud[0]), cmpByRoom);
//
//            if (stuCount) {
//                for (int i = 0; i < stuCount; i++) {
//                    if (dateStud[i].count) {
//                        printf("%s %d\n", dateStud[i].room, dateStud[i].count);
//                    }
//                }
//            } else {
//                printf("NA\n");
//            }
//        }
//    }
//
//    return 0;
//}

