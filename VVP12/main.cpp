//
//  main.cpp
//  VVP12
//
//  Created by Роберт Скиталинский on 29.12.2021.
//

#include <iostream>
using namespace std;
//Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).
 /*  int main() {
        int a,b;
        cout << "Введите число: ";
        cin >> a;
        cin >> b;
        cout << "Дата: " << " ";
        
        switch ((a % 100) / 10)
        {
        case 2: cout << "двадцать "; break;
        case 3: cout << "тридцать "; break;
    
        }
    
        if (a % 100 >= 10 & a % 100 < 20){
    
            switch (a % 100)
            {
            case 10: cout << "десятое "; break;
            case 11: cout << "одинадцатое "; break;
            case 12: cout << "двенадцатое "; break;
            case 13: cout << "тринадцатое "; break;
            case 14: cout << "четырнадцатое "; break;
            case 15: cout << "пятнадцатое "; break;
            case 16: cout << "шестнадцатое "; break;
            case 17: cout << "семнадцатое "; break;
            case 18: cout << "восемнадцатое "; break;
            case 19: cout << "девятнадцатое "; break;
            }
        }
    
        else{
    
            switch (a % 10)
            {
            case 1: cout << "первое "; break;
            case 2: cout << "второе "; break;
            case 3: cout << "третье "; break;
            case 4: cout << "четвертое "; break;
            case 5: cout << "пятое "; break;
            case 6: cout << "шестое "; break;
            case 7: cout << "седьмое "; break;
            case 8: cout << "восьмое "; break;
            case 9: cout << "девятое "; break;
            }
        }
        
            switch(b){
                case 1: cout << "января\n" ; break;
                case 2: cout << "февраля\n"  ; break;
                case 3: cout << "марта\n" ; break;
                case 4: cout << "апреля\n" ; break;
                case 5: cout << "мая\n"  ; break;
                case 6: cout << "июня\n" ; break;
                case 7: cout << "июля\n" ; break;
                case 8: cout << "августа\n"  ; break;
                case 9: cout << "сентября\n" ; break;
                case 10: cout << "октября\n" ; break;
                case 11: cout << "ноября\n"  ; break;
                case 12: cout << "декабря\n" ; break;
            }
        return 0;
    }
//Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. Дан символ C — исходное направление робота и целое число N — посланная ему команда. Вывести направление робота после выполнения полученной команды

int main(){
    int c,n;
    cout << "Введите начальное положение робота: " ;
    cin >> c;
    cout << "Введите команду: ";
    cin >> n;
    if (c == 1){
            switch(n){
                case 0:  cout << "Робот направлен на север "; break;
                case 1:  cout << "Робот направлен на запад "; break;
                case -1: cout << "Робот направлен на восток "; break;
            }
    }
    if (c == 2){
            switch(n){
                case 0:  cout << "Робот направлен на запад "; break;
                case 1:  cout << "Робот направлен на юг "; break;
                case -1: cout << "Робот направлен на север "; break;
            }
    }
    if (c == 3){
            switch(n){
                case 0:  cout << "Робот направлен на юг "; break;
                case 1:  cout << "Робот направлен на восток "; break;
                case -1: cout << "Робот направлен на запад "; break;
            }
    }
    if (c == 4){
            switch(n){
                case 0:  cout << "Робот направлен на восток "; break;
                case 1:  cout << "Робот направлен на север "; break;
                case -1: cout << "Робот направлен на юг "; break;
            }
    }
}
  
//Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий».

int main(){
    int a;
    cout << "Введите число: ";
    cin >> a;
    if (a >= 10 and a <= 40){
        switch(a){
            case 10: cout << "десять учебных заданий "; break;
            case 11: cout << "одиннадцать учебных заданий "; break;
            case 12: cout << "двенадцать учебных заданий "; break;
            case 13: cout << "тринадцать учебных заданий "; break;
            case 14: cout << "четырнадцать учебных заданий "; break;
            case 15: cout << "пятнадцать учебных заданий "; break;
            case 16: cout << "шестнадцать учебных заданий "; break;
            case 17: cout << "семнадцать учебных заданий "; break;
            case 18: cout << "восемнадцать учебных заданий "; break;
            case 19: cout << "девятнацать учебных заданий "; break;
            case 20: cout << "двадцать учебных заданий "; break;
            case 21: cout << "двадцать один учебных заданий "; break;
            case 22: cout << "двадцать два учебных заданий "; break;
            case 23: cout << "двадцать три учебных заданий "; break;
            case 24: cout << "двадцать чертыре учебных заданий "; break;
            case 25: cout << "двадцать пять учебных заданий "; break;
            case 26: cout << "двадцать шесть учебных заданий "; break;
            case 27: cout << "двадцать семь учебных заданий "; break;
            case 28: cout << "двадцать восемь учебных заданий "; break;
            case 29: cout << "двадцать девять учебных заданий "; break;
            case 30: cout << "тридцать учебных заданий "; break;
            case 31: cout << "тридцать одно учебных заданий "; break;
            case 32: cout << "тридцать два учебных заданий "; break;
            case 33: cout << "тридцать три учебных заданий "; break;
            case 34: cout << "тридцать четыре учебных заданий "; break;
            case 35: cout << "тридцать пять учебных заданий "; break;
            case 36: cout << "тридцать шесть учебных заданий "; break;
            case 37: cout << "тридцать семь учебных заданий "; break;
            case 38: cout << "тридцать восемь учебных заданий "; break;
            case 39: cout << "тридцать девять учебных заданий "; break;
            case 40: cout << "сорок учебных заданий "; break;
        }
    }
    cout << endl;
    return 0;
}

//Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».
int main(){
        int a;
        cout << "Введите число: ";
        cin >> a;
        switch (a / 100)
        {
        case 1: cout << "Сто "; break;
        case 2: cout << "Двести "; break;
        case 3: cout << "Триста "; break;
        case 4: cout << "Четыреста "; break;
        case 5: cout << "Пятсот "; break;
        case 6: cout << "Шестьсот "; break;
        case 7: cout << "Семьсот "; break;
        case 8: cout << "Восемьсот "; break;
        case 9: cout << "Девятьсот "; break;
        }
        switch ((a % 100) / 10)
        {
        case 2: cout << "двадцать "; break;
        case 3: cout << "тридцать "; break;
        case 4: cout << "сорок "; break;
        case 5: cout << "пятдесят "; break;
        case 6: cout << "шестьдесят "; break;
        case 7: cout << "Семьдесят "; break;
        case 8: cout << "Восемьдесят "; break;
        case 9: cout << "Девяносто "; break;
        }
        if (a % 100 >= 10 & a % 100 < 20){
            switch (a % 100){
            case 10: cout << "десять"; break;
            case 11: cout << "одинадцать"; break;
            case 12: cout << "двенадцать"; break;
            case 13: cout << "тринадцать"; break;
            case 14: cout << "четырнадцать"; break;
            case 15: cout << "пятнадцать"; break;
            case 16: cout << "шестнадцать"; break;
            case 17: cout << "семнадцать"; break;
            case 18: cout << "восемнадцать"; break;
            case 19: cout << "девятнадцать"; break;
            }
        }
        else{
            switch (a % 10)
            {
            case 0: cout << "ноль\n"; break;
            case 1: cout << "один\n"; break;
            case 2: cout << "два\n"; break;
            case 3: cout << "три\n"; break;
            case 4: cout << "четыре\n"; break;
            case 5: cout << "пять\n"; break;
            case 6: cout << "шесть\n"; break;
            case 7: cout << "семь\n"; break;
            case 8: cout << "восемь\n"; break;
            case 9: cout << "девять\n"; break;
            }
        }

        return 0;
    }
*/
//В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».
int main() {
    int a;
    cout << "Введите год: ";
    cin >> a;
    
    if(a < 1){
        cout<<"Неправильно введён год!";
        return 0;
    }
    
    cout<<"Год ";
        switch (a % 10) {
        case 1: cout<<"белой(ого) "; break;
        case 2:
        case 3: cout<<"чёрной(ого) "; break;
        case 4:
        case 5: cout<<"зелёной(ого) "; break;
        case 6:
        case 7: cout<<"красной(ого) "; break;
        case 8:
        case 9: cout<<"жёлтой(ого) "; break;
    }
        switch ((a + 8) % 12) {
        case 0: cout<<"крысы"; break;
        case 1: cout<<"быка"; break;
        case 2: cout<<"тигра"; break;
        case 3: cout<<"кролика"; break;
        case 4: cout<<"дракона"; break;
        case 5: cout<<"змеи"; break;
        case 6: cout<<"лошади"; break;
        case 7: cout<<"овцы"; break;
        case 8: cout<<"обезьяны"; break;
        case 9: cout<<"петуха"; break;
        case 10: cout<<"собаки"; break;
        case 11: cout<<"свиньи"; break;
    }
    cout << endl;
return 0;
}

