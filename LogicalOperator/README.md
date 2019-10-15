# Условни оператори

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

## Оператор if

```c++
if(boolean_expression)
{
   // statement(s) will execute if the 
           // boolean expression is true
}
```


## Оператор if.. else

```c++
if(boolean_expression)
{
   // True Block
}
else
{
   // False Block
}
```

## Оператор ..else..if

```c++
if(boolean_expression 1)
{
   // When expression 1 is true
}
else if( boolean_expression 2)
{
   // When expression 2 is true
}
else if( boolean_expression 3)
{
   // When expression 3 is true
}
else 
{
   // When none of expression is true
}
```

## Оператор Switch Case

```c++
switch(expression)
{
case value1 : 
    body1
    break;

case value2 : 
    body2
    break;

case value3 : 
    body3
    break;

default :
    default-body
    break;  
}
```
