#pragma once
// display.h
#ifndef DISPLAY_H
#define DISPLAY_H

#ifdef HEADLESS
#include "util/VectorDisplay.h"
#else
#include <TFT_eSPI.h>
#endif
#include <ArduinoJson.h>
#include <functional>
#include <vector>
#include "globals.h"
// Declaração dos objetos TFT
#if defined(HEADLESS)
extern SerialDisplayClass tft;
#else
extern TFT_eSPI tft; 
#endif
void loopOptions(const std::vector<std::pair<std::string, std::function<void()>>>& options, bool bright = false);
void loopVersions();
void loopFirmware();
void initDisplay(bool doAll = false); // Início da função e mostra bootscreen

//Funções para economizar linhas nas outras funções
void resetTftDisplay(int x = 0, int y = 0, uint16_t fc = FGCOLOR, int size = FONT_M, uint16_t bg = BGCOLOR, uint16_t screen = BGCOLOR);
void setTftDisplay(int x = 0, int y = 0, uint16_t fc = tft.textcolor, int size = tft.textsize, uint16_t bg = tft.textbgcolor);

void displayCurrentItem(JsonDocument doc, int currentIndex);
void displayCurrentVersion(String name, String author, String version, String published_at, int versionIndex, JsonArray versions);

void displayRedStripe(String text, uint16_t fgcolor = TFT_WHITE, uint16_t bgcolor = ALCOLOR);

void progressHandler(int progress, size_t total);

struct Opt_Coord {
  uint16_t x=0;
  uint16_t y=0;
  uint16_t size=10;
};
void displayScrollingText(const String& text, Opt_Coord& coord);

Opt_Coord drawOptions(int index,const std::vector<std::pair<std::string, std::function<void()>>>& options, uint16_t fgcolor, uint16_t bgcolor);

void drawSection(int x, int y, int w, int h, uint16_t color, const char* text, bool isSelected);

void drawDeviceBorder();

void drawBatteryStatus();

void drawMainMenu(int index = 0);

Opt_Coord listFiles(int index, String fileList[][3]);

void TouchFooter(uint16_t color = FGCOLOR);

void TouchFooter2(uint16_t color = FGCOLOR);

void tftprintln(String txt, int margin, int numlines = 0);

void tftprint(String txt, int margin, int numlines = 0);

#endif
