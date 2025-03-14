Algorithm f(n):
    x ← 10; y ← 13
    While n ≠ 0 execute
        z ← (x + y) MOD 2
        n ← n DIV 2
        If z MOD 2 = 0 then
            x ← (x * 3 + y * 4) MOD z
            y ← (y + x) * z
        Else
            x ← x - 1
            y ← y + 1
        EndIf
    EndWhile
    Return z
EndAlgorithm

[1, 2, 3, 4]

Subsecventele:
[1]
[2]
[3]
[4]
[1 2]
[2 3]
[3 4]
[1 2 3]
[2 3 4]
[1 2 3 4]


Subsisrurile:
[1]
[2]
[3]
[4]
[1 2]
[1 3]
[1 4]
[2 3]





    5
  /   \
  3    8
 / \   / \
2  4   6  9

2 4 3 6 9 8 5s