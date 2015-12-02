int main() {
  /* Setup */
  char* mem = (char*)malloc(30000*sizeof(char));
  char* p = mem;

  *p += 72; // H
  ++p;
  *p += 69; // E
  ++p;
  *p += 76; // L
  ++p;
  *p += 76; // L
  ++p;
  *p += 76; // O
  
  p -= 5;
  while(*p) {
    putchar(*p);
    ++p;
  }

  return 1;
}
