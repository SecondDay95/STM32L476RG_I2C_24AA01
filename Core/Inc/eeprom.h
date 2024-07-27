#pragma once

#include "stm32l4xx.h"

// Opóźnienie niezbędne do zakończenia zapisu
// Funkcja wprowadza automatycznie opóźnienie tylko, gdy jest ono potrzebne
void eeprom_wait(void);

//Odczyt danych z pamieci eeprom
//addr - poczatkowy adres danych
//data - bufor na odczytane dane
//size - liczba bajtow do odczytania
//return - HAL_OK jesli odczyt zakonczony sukcesem, wpp. blad
HAL_StatusTypeDef eeprom_read(uint32_t addr, void* data, uint32_t size);

//Zapis danych do pamieci eeprom
//addr - poczatkowy adres danych
//data - bufor na dane zapisu
//size - liczba bajtow do zapisania
//return - HAL_OK jesli zapis zakonczony sukcesem, wpp. blad
HAL_StatusTypeDef eeprom_write(uint32_t addr, const void* data, uint32_t size);
