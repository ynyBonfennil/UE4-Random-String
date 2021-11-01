// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomStringGenerator.h"

FString URandomStringGenerator::RandomString(int length)
{
    auto randchar = []() -> char
    {
        const char charset[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[rand() % max_index];
    };

    FString generated = "";
    for (int i = 0; i < length; i++)
    {
        generated.AppendChar(randchar());
    }
    return generated;
}