filename=main

pdf: 
	pdflatex ${filename}

# ps: dvi
# 	dvips ${filename}.dvi

# dvi:
# 	latex ${filename}
# 	bibtex ${filename}||true
# 	latex ${filename}
# 	latex ${filename}

r:
	mupdf-x11 ${filename}.pdf &

aread:
	acroread ${filename}.pdf &

clean:
	rm -f ${filename}.ps ${filename}.pdf ${filename}.log ${filename}.aux ${filename}.out ${filename}.dvi ${filename}.bbl ${filename}.blg
