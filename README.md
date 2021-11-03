# КМ 3

### перевод дней в недили и дни

#### ниже приведены примеры компиляции и запуска

```shell
$ gcc 1.c -o 1

$ ./1
Write days count
12
Weeks count: 1 ,Days Count: 5
Write days count
321
Weeks count: 45 ,Days Count: 6
Write days count
124122225414
Weeks count: 306783378 ,Days Count: 1
Write days count
0
Stop program
```

программа работает в бесконечном цикле, пока не наберете неположительное число

### Перевод из Кельвин в Фаренгейты и обратно

```shell
$ gcc 2.c -o 2
$ ./2
Choose option
1) from F to K
2) from K to F
3) exit
1
Enter value in F
321
321.000000 F is 433.705566 K
Choose option
1) from F to K
2) from K to F
3) exit
2
Enter value in K
31241241
31241240.000000 K is 56233768.000000 F
Choose option
1) from F to K
2) from K to F
3) exit
3
Stop program

```

программа работает в бесконечном цикле, пока не выберете опцию 3 (Выход)

## Запись и чтение из массива

```shell
$ gcc 3.c -o 3
$ ./3
Write 8 numbers
321
43
124
312141543
3141522
-213
41251
312

 result is :
321     43      124     312141543       3141522         -213    41251   312

```

## Подсчет Кол-во отрицательных чисел в строке массива

```shell
$ gcc 4.c -o 4
$ ./4
Generate and sort row of array with size n*m
Enter n size:
3
Enter m size:
3
Enter 3 values to row 1
312
02
-31
Enter 3 values to row 2
321
-2
-2
Enter 3 values to row 3
-3
-2
-42
introduced array is :
312     2       -31
321     -2      -2
-3      -2      -42
Enter index of sorting row (index start on 1) :
3
line 3 contains 3 negative value:
```

## Сортировка строки массива

```shell
$ ./5
Generate and sort row of array with size n*m
Enter n size:
4
Enter m size:
4
Enter 4 values to row 1
4
3
2
1
Enter 4 values to row 2
4
3
2
1
Enter 4 values to row 3
4
3
2
1
Enter 4 values to row 4
4
3
2
1
introduced array is :
4       3       2       1
4       3       2       1
4       3       2       1
4       3       2       1
Enter index of sorting row (index start on 1) :
2
sorted array is :
4       3       2       1
1       2       3       4
4       3       2       1
4       3       2       1
```