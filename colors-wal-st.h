const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#322119", /* black   */
  [1] = "#C3763A", /* red     */
  [2] = "#8EC07C", /* green   */
  [3] = "#B7AE44", /* yellow  */
  [4] = "#B08F69", /* blue    */
  [5] = "#D5A165", /* magenta */
  [6] = "#85C1EE", /* cyan    */
  [7] = "#EADAB1", /* white   */

  /* 8 bright colors */
  [8]  = "#788997",  /* black   */
  [9]  = "#C3763A",  /* red     */
  [10] = "#8EC07C", /* green   */
  [11] = "#B7AE44", /* yellow  */
  [12] = "#B08F69", /* blue    */
  [13] = "#D5A165", /* magenta */
  [14] = "#85C1EE", /* cyan    */
  [15] = "#EADAB1", /* white   */

  /* special colors */
  [256] = "#322119", /* background */
  [257] = "#EADAB1", /* foreground */
  [258] = "#EADAB1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
