const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#091019", /* black   */
  [1] = "#226CA2", /* red     */
  [2] = "#73798E", /* green   */
  [3] = "#857E86", /* yellow  */
  [4] = "#6D87A6", /* blue    */
  [5] = "#1C8ED8", /* magenta */
  [6] = "#2C91D8", /* cyan    */
  [7] = "#c4c0c1", /* white   */

  /* 8 bright colors */
  [8]  = "#898687",  /* black   */
  [9]  = "#226CA2",  /* red     */
  [10] = "#73798E", /* green   */
  [11] = "#857E86", /* yellow  */
  [12] = "#6D87A6", /* blue    */
  [13] = "#1C8ED8", /* magenta */
  [14] = "#2C91D8", /* cyan    */
  [15] = "#c4c0c1", /* white   */

  /* special colors */
  [256] = "#091019", /* background */
  [257] = "#c4c0c1", /* foreground */
  [258] = "#c4c0c1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
