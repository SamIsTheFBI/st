const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#15140b", /* black   */
  [1] = "#D4102A", /* red     */
  [2] = "#E11530", /* green   */
  [3] = "#F62452", /* yellow  */
  [4] = "#FA2850", /* blue    */
  [5] = "#E24D64", /* magenta */
  [6] = "#618D57", /* cyan    */
  [7] = "#ccc0ae", /* white   */

  /* 8 bright colors */
  [8]  = "#8e8679",  /* black   */
  [9]  = "#D4102A",  /* red     */
  [10] = "#E11530", /* green   */
  [11] = "#F62452", /* yellow  */
  [12] = "#FA2850", /* blue    */
  [13] = "#E24D64", /* magenta */
  [14] = "#618D57", /* cyan    */
  [15] = "#ccc0ae", /* white   */

  /* special colors */
  [256] = "#15140b", /* background */
  [257] = "#ccc0ae", /* foreground */
  [258] = "#ccc0ae",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
