# Логически оператори

## Логически тип данни

Логическия тип данни в c++ е <b>bool</b> той приема стойности <b>true</b>(1) или <b>false</b>(0)

### Пример

```
bool a = true;
```

## Оператори за сравняване

|Оператор | Пример | Значение |
| -- | -- | -- |
| == | a == b | a равно на b |
| != | a != b | a различно от b |
| > | a > b  | a по-голямо от b |
| < | a < b  | a по-малко от b |
| >= | a >= b | a по-голямо или равно на b |
| <= | a <= b | a по-малко или равно на b

## Логически оператори

|Оператор | Пример | Значение |
| -- | -- | -- |
&& | a && b | a <b>И</b> b са true |
\|\| | a \|\| b | a <b>ИЛИ</b> b е true |
! | !a  | противоположното на a |

### Пример

|Променлива а | Променлива b | a && b | a \|\| b | !a |
| -- | -- | -- | -- | -- |
false | false | false | false | true
false | true  | false | true  | true 
true  | false | false | true  | false
true  | true  | true  | true  | false 

