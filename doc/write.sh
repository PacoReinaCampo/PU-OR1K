rm -f *.tex
rm -f *.pdf

pandoc BOOK.md -s -o PU-OR1K.tex
pandoc BOOK.md -s -o PU-OR1K.pdf
