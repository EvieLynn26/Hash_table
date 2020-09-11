#include "stdio.h"
#include "assert.h"
#include "string.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include "list.h"

const int PIECE_SIZE = 100;
const int BUFF_SIZE = 100;
const int START_VECT_SIZE = 10;

struct HashTable {

    std::vector<list> data;

    int N = 0;
    int curr_vect_size = START_VECT_SIZE;

    HashTable() {
        data.resize(START_VECT_SIZE);
    }

    int Hash(const char* str) {

        return strlen(str);
    }

    void Insert(const char* str) {

        InsertTail(&data[Hash(str)], str);

        ++N;

        if (N > curr_vect_size * 2) {

            curr_vect_size *= 2;
            data.resize(curr_vect_size);

            //rehash(
        }

    }

    //rehash() {

    //    data[i+

    //}

    /*bool Find_word(const char* word) {
        int word_hash = Hash(word);

        auto iter = std::find(data[word_hash].begin(), data[word_hash].end(), word);

        return (iter != data[word_hash].end());
    } */
};

void parse_buff(char* buff) {
    char* curr_buff = buff;

    while (curr_buff < buff + BUFF_SIZE) {
    }
}

int main() {

    HashTable ht1;

    ht1.Insert("qwer");
    ht1.Insert("asf");
    ht1.Insert("poiu");

    ht1.Find

    /*HashTable ht1;

    char str[10];
    //for (int i = 0; i <

    std::cin >> str;

    ht1.Insert(str);



    std::cout << (ht1.Find_word("no") ? "true" : "false");

    FILE* input_file = fopen("test.txt", "r");
    assert(input_file != nullptr);

    //int char_count = PIECE_SIZE;

    char buff[PIECE_SIZE] {};

    while (!feof(input_file)) {
        fread(buff, sizeof(char), PIECE_SIZE, input_file);
        parse_buff(buff);
    }

    printf("sizeof buff = %d\n", sizeof(buff));

    fclose(input_file);
    */

    return 0;
}
