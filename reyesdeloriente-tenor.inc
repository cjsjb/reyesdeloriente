\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble_8"
		\key g \minor

		R2*4  |
%% 5
		bes 8 bes a a  |
		bes 8. r r8  |
		bes 8 bes a a  |
		bes 8. r r8  |
		bes 8 bes a a  |
%% 10
		bes 8. r r8  |
		bes 8 bes a a  |
		bes 8. r r8  |
		bes 8 bes a a  |
		bes 8. r r8  |
%% 15
		bes 8 bes a a  |
		bes 8. r r8  |
		d' 8 d' d' d'  |
		d' 8. bes r8  |
		c' 8 c' d' c'  |
%% 20
		bes 4 r  |
		g 8 g a a  |
		bes 8. bes r8  |
		ees' 8. d' 16 c' 8 bes  |
		a 4 r  |
%% 25
		g 8 g a a  |
		bes 8. bes r8  |
		f 8. g 16 a 8 g  |
		fis 4 r  |
		d' 8 c' bes a  |
%% 30
		g 8 ( a 16 bes 8. ) g 8  |
		a 8 ( bes 16 c' 8. ) a 8  |
		bes 8 ( c' 16 d' 8. ) r8  |
		d' 8 c' bes a  |
		g 8 ( a 16 bes 8. ) g 8  |
%% 35
		a 8 ( bes 16 c' 8. ) a 8  |
		bes 2  |
		d' 8 d' d' d'  |
		d' 8. bes r8  |
		c' 8 c' d' c'  |
%% 40
		bes 4 r  |
		g 8 g a a  |
		bes 8. bes r8  |
		ees' 8. d' 16 c' 8 bes  |
		a 4 r  |
%% 45
		g 8 g a a  |
		bes 8. bes r8  |
		f 8. g 16 a 8 g  |
		fis 4 r  |
		d' 8 c' bes a  |
%% 50
		g 8 ( a 16 bes 8. ) g 8  |
		a 8 ( bes 16 c' 8. ) a 8  |
		bes 8 ( c' 16 d' 8. ) r8  |
		d' 8 c' bes a  |
		g 8 ( a 16 bes 8. ) g 8  |
%% 55
		a 8 ( bes 16 c' 8. ) a 8  |
		bes 2  |
		d' 8 d' d' d'  |
		d' 8. bes r8  |
		c' 8 c' d' c'  |
%% 60
		bes 4 r  |
		g 8 g a a  |
		bes 8. bes r8  |
		ees' 8. d' 16 c' 8 bes  |
		a 4 r  |
%% 65
		g 8 g a a  |
		bes 8. bes r8  |
		f 8. g 16 a 8 g  |
		fis 4 r  |
		d' 8 c' bes a  |
%% 70
		g 8 ( a 16 bes 8. ) g 8  |
		a 8 ( bes 16 c' 8. ) a 8  |
		bes 8 ( c' 16 d' 8. ) r8  |
		d' 8 c' bes a  |
		g 8 ( a 16 bes 8. ) g 8  |
%% 75
		a 8 ( bes 16 c' 8. ) a 8  |
		bes 2 ~  |
		bes 2 ~  |
		bes 2 ~  |
		bes 2  |
%% 80
		a 2 ~  |
		a 2 ~  |
		a 2 ~  |
		a 2  |
		g 2 ~  |
%% 85
		g 2 ~  |
		g 2 ~  |
		g 2  |
		g 2 ~  |
		g 2 ~  |
%% 90
		g 2 ~  |
		g 2  |
		g 8 g 16 g 8. r8  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-tenor" {
		% intro
		La la la la la,
		la la la la la,
		la la la la la,
		la la la la la,
		la la la la la,
		la la la la la.

		% Magos del Oriente...
		Ma -- gos del O -- rien -- te
		van ha -- cia Be -- lén,
		van "a a" -- rro -- di -- llar -- se
		an -- "te el" ni -- ño rey,
		van "a a" -- rro -- di -- llar -- se
		an -- "te el" ni -- ño rey.

		% Gloria sea a Dios...
		Glo -- ria se -- "a a" Dios,
		a Dios, a Dios.
		Glo -- ria se -- "a a" Dios,
		a Dios, a Dios.

		% Magos del Oriente...
		Ma -- gos del O -- rien -- te
		van ha -- cia Be -- lén,
		van "a a" -- rro -- di -- llar -- se
		an -- "te el" ni -- ño rey,
		van "a a" -- rro -- di -- llar -- se
		an -- "te el" ni -- ño rey.

		% Gloria sea a Dios...
		Glo -- ria se -- "a a" Dios,
		a Dios, a Dios.
		Glo -- ria se -- "a a" Dios,
		a Dios, a Dios.

		% Venid adoremos...
		Ve -- nid, a -- do -- re -- mos
		al hi -- jo de Dios.
		De -- mos glo -- "ria al" Pa -- dre
		por tan ri -- co don,
		de -- mos glo -- "ria al" Pa -- dre
		por tan ri -- co don.

		% Gloria sea a Dios...
		Glo -- ria se -- "a a" Dios,
		a Dios, a Dios.
		Glo -- ria se -- "a a" Dios,
		a Dios, a Dios. __

		% outro
		Oh, __ oh, __ oh. __
		¡Glo -- "ria a" Dios!
	}
>>
