// blocks - Port automatico J2ME -> PSP
// Gerado por portador.py
// MIDlet: Blocks  Canvas: BlocksCanvas

#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"
#include <stdint.h>

// ============================================
// TIPOS J2ME -> ponteiros opacos em C
// ============================================
typedef void* Image;
typedef void* Graphics;
typedef void* Font;
typedef void* String;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* MIDlet;
typedef void* Canvas;

PSP_MODULE_INFO("blocks", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// ============================================
// FORWARD DECLARATIONS das classes do projeto
// ============================================
typedef struct Blocks_s Blocks;
typedef struct BlocksCanvas_s BlocksCanvas;
typedef struct BlocksHelp_s BlocksHelp;

// ============================================
// ESTRUTURAS DE DADOS (traduzidas do J2ME)
// ============================================

// === Classe: Blocks (extends MIDlet) ===
// Padroes detectados: MIDLET, TEM_STARTAPP
struct Blocks_s {
    Command*        startCommand;  // startCommand (Ljavax/microedition/lcdui/Command;)
    Command*        goCommand;  // goCommand (Ljavax/microedition/lcdui/Command;)
    Command*        exitCommand;  // exitCommand (Ljavax/microedition/lcdui/Command;)
    Command*        restartCommand;  // restartCommand (Ljavax/microedition/lcdui/Command;)
    BlocksCanvas*   bcanvas;  // bcanvas (LBlocksCanvas;)
    BlocksHelp*     bhelp;  // bhelp (LBlocksHelp;)
};

// === Classe: BlocksCanvas (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_INPUT, TEM_RUN, USA_IMAGE
struct BlocksCanvas_s {
    int             MINIMUMSCROLLDELAY;  // MINIMUMSCROLLDELAY (I)
    int             level;  // level (I)
    Random*         random;  // random (Ljava/util/Random;)
    int             initTime;  // initTime (I)
    int             timeleft;  // timeleft (I)
    int             extraTime;  // extraTime (I)
    int             elapsedTime;  // elapsedTime (I)
    int             scores;  // scores (I)
    Blocks*         parent;  // parent (LBlocks;)
    int             gameOver;  // gameOver (Z)
    int             ROWS;  // ROWS (I)
    int             COLS;  // COLS (I)
    int             MIDDLE;  // MIDDLE (I)
    int**           board;  // board ([[I)
    int             width;  // width (I)
    int             height;  // height (I)
    int             p1top;  // p1top (I)
    int             p2top;  // p2top (I)
    int             pleft;  // pleft (I)
    int             p1height;  // p1height (I)
    int             bsize;  // bsize (I)
    int             GAP;  // GAP (I)
    int             cellW;  // cellW (I)
    int             cellH;  // cellH (I)
    int             bgcolor;  // bgcolor (I)
    int             blockcolor;  // blockcolor (I)
    int             pencolor;  // pencolor (I)
    Graphics*       bg;  // bg (Ljavax/microedition/lcdui/Graphics;)
    Image*          buf;  // buf (Ljavax/microedition/lcdui/Image;)
    Font*           fcal;  // fcal (Ljavax/microedition/lcdui/Font;)
    int             state;  // state (I)
    int             fontH;  // fontH (I)
    int             fontW;  // fontW (I)
    int             fontW2;  // fontW2 (I)
    int             waitblock;  // waitblock (I)
    int             direct;  // direct (I)
    int             mblock_x;  // mblock_x (I)
    int             mblock_y;  // mblock_y (I)
    int             count;  // count (I)
    int             remains;  // remains (I)
    int             fallen;  // fallen (I)
    int             maxblocks;  // maxblocks (I)
    Image**         imgs;  // imgs ([Ljavax/microedition/lcdui/Image;)
    int*            left;  // left ([Z)
    Thread*         runner;  // runner (Ljava/lang/Thread;)
};

// === Classe: BlocksHelp (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, USA_IMAGE
struct BlocksHelp_s {
    Blocks*         parent;  // parent (LBlocks;)
    Image*          buf;  // buf (Ljavax/microedition/lcdui/Image;)
    Image*          imgLogo;  // imgLogo (Ljavax/microedition/lcdui/Image;)
    Graphics*       bg;  // bg (Ljavax/microedition/lcdui/Graphics;)
    Font*           fcal;  // fcal (Ljavax/microedition/lcdui/Font;)
    int             width;  // width (I)
    int             height;  // height (I)
};

// ============================================
// METODOS (traduzidos do bytecode)
// ============================================

// === Blocks.Blocks_constructor (()V) ===
// Instrucoes: 75
// APIs usadas:
//   4x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   4x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   2x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
//   1x javax/microedition/midlet/MIDlet.<init> -> ??? javax/microedition/midlet/MIDlet.<init>
void Blocks_constructor() {
    // TODO: traduzir logica do bytecode
}

// === Blocks.Blocks_startApp (()V) ===
// Instrucoes: 6
// APIs usadas:
//   1x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void Blocks_startApp() {
    // TODO: traduzir logica do bytecode
}

// === Blocks.Blocks_pauseApp (()V) ===
// Instrucoes: 1
void Blocks_pauseApp() {
    // TODO: traduzir logica do bytecode
}

// === Blocks.Blocks_destroyApp ((Z)V) ===
// Instrucoes: 1
void Blocks_destroyApp() {
    // TODO: traduzir logica do bytecode
}

// === Blocks.Blocks_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 59
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
//   1x javax/microedition/midlet/MIDlet.notifyDestroyed -> ??? javax/microedition/midlet/MIDlet.notifyDestroyed
void Blocks_commandAction() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_constructor ((LBlocks;)V) ===
// Instrucoes: 233
// APIs usadas:
//   13x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
//   1x java/util/Random.<init> -> j2me_random_init
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   1x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   1x javax/microedition/lcdui/Font.getHeight -> ??? javax/microedition/lcdui/Font.getHeight
void BlocksCanvas_constructor() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_reset (()V) ===
// Instrucoes: 47
void BlocksCanvas_reset() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_initBoard (()V) ===
// Instrucoes: 204
// APIs usadas:
//   3x java/util/Random.nextInt -> j2me_random_next
//   1x javax/microedition/lcdui/Graphics.setGrayScale -> ??? javax/microedition/lcdui/Graphics.setGrayScale
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void BlocksCanvas_initBoard() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_getTop ((I)I) ===
// Instrucoes: 17
int BlocksCanvas_getTop() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === BlocksCanvas.BlocksCanvas_getLeft ((I)I) ===
// Instrucoes: 28
int BlocksCanvas_getLeft() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === BlocksCanvas.BlocksCanvas_run (()V) ===
// Instrucoes: 741
// APIs usadas:
//   2x java/lang/System.currentTimeMillis -> j2me_time_ms
//   2x java/lang/Math.min -> min
//   2x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   2x java/util/Random.nextInt -> j2me_random_next
//   1x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   1x java/lang/Thread.sleep -> j2me_sleep
//   1x javax/microedition/lcdui/Graphics.setGrayScale -> ??? javax/microedition/lcdui/Graphics.setGrayScale
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void BlocksCanvas_run() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 10
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void BlocksCanvas_paint() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_paintTime (()V) ===
// Instrucoes: 62
// APIs usadas:
//   6x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x javax/microedition/lcdui/Graphics.setGrayScale -> ??? javax/microedition/lcdui/Graphics.setGrayScale
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void BlocksCanvas_paintTime() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_drawWaitblock ((I)V) ===
// Instrucoes: 28
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void BlocksCanvas_drawWaitblock() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_moveBlock ((IIIII)V) ===
// Instrucoes: 45
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void BlocksCanvas_moveBlock() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_findconnect ((III)V) ===
// Instrucoes: 124
void BlocksCanvas_findconnect() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_reverse (()V) ===
// Instrucoes: 36
void BlocksCanvas_reverse() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_remove (()V) ===
// Instrucoes: 39
void BlocksCanvas_remove() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_rearrange (()V) ===
// Instrucoes: 54
void BlocksCanvas_rearrange() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_clearBlock ((II)V) ===
// Instrucoes: 30
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.setGrayScale -> ??? javax/microedition/lcdui/Graphics.setGrayScale
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void BlocksCanvas_clearBlock() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_raiseBlocks (()V) ===
// Instrucoes: 134
// APIs usadas:
//   1x java/util/Random.nextInt -> j2me_random_next
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void BlocksCanvas_raiseBlocks() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_isGameover (()Z) ===
// Instrucoes: 3
int BlocksCanvas_isGameover() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === BlocksCanvas.BlocksCanvas_gameover (()V) ===
// Instrucoes: 50
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setGrayScale -> ??? javax/microedition/lcdui/Graphics.setGrayScale
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void BlocksCanvas_gameover() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_youwin (()V) ===
// Instrucoes: 50
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setGrayScale -> ??? javax/microedition/lcdui/Graphics.setGrayScale
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void BlocksCanvas_youwin() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_endGame (()V) ===
// Instrucoes: 7
void BlocksCanvas_endGame() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_restartGame (()V) ===
// Instrucoes: 54
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.setGrayScale -> ??? javax/microedition/lcdui/Graphics.setGrayScale
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void BlocksCanvas_restartGame() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_start (()V) ===
// Instrucoes: 10
// APIs usadas:
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
//   1x java/lang/Thread.start -> j2me_thread_start
void BlocksCanvas_start() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_pause (()V) ===
// Instrucoes: 1
void BlocksCanvas_pause() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_dest (()V) ===
// Instrucoes: 5
void BlocksCanvas_dest() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_keyRepeated ((I)V) ===
// Instrucoes: 4
void BlocksCanvas_keyRepeated() {
    // TODO: traduzir logica do bytecode
}

// === BlocksCanvas.BlocksCanvas_keyPressed ((I)V) ===
// Instrucoes: 21
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
void BlocksCanvas_keyPressed() {
    // TODO: traduzir logica do bytecode
}

// === BlocksHelp.BlocksHelp_constructor ((LBlocks;)V) ===
// Instrucoes: 54
// APIs usadas:
//   3x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   3x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   2x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   1x javax/microedition/lcdui/Graphics.setGrayScale -> ??? javax/microedition/lcdui/Graphics.setGrayScale
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void BlocksHelp_constructor() {
    // TODO: traduzir logica do bytecode
}

// === BlocksHelp.BlocksHelp_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 16
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void BlocksHelp_paint() {
    // TODO: traduzir logica do bytecode
}

// ============================================
// GAME LOOP PRINCIPAL
// ============================================

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;

        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);

        // TODO: chamar metodos do jogo aqui
        // Blocks_startApp();
        // BlocksCanvas_paint();

        j2me_gfx_flip();
    }

    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}
