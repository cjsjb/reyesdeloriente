\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble"
		\key g \minor

		R2*12  |
		g' 8 g' f' f'  |
		g' 8. d' r8  |
%% 15
		g' 8 g' f' f'  |
		g' 8. d' r8  |
		d'' 8 d'' c'' c''  |
		bes' 8. g' r8  |
		a' 8 a' bes' a'  |
%% 20
		g' 4 r  |
		bes' 8 bes' c'' c''  |
		d'' 8. d'' r8  |
		c'' 8. bes' 16 a' 8 g'  |
		fis' 4 r  |
%% 25
		g' 8 g' a' a'  |
		bes' 8. bes' r8  |
		a' 8. g' 16 f' 8 ees'  |
		d' 4 r  |
		d' 8 d' e' fis'  |
%% 30
		g' 8 ( a' 16 bes' 8. ) g' 8  |
		fis' 8 ( g' 16 a' 8. ) fis' 8  |
		g' 8 ( a' 16 bes' 8. ) r8  |
		d' 8 d' e' fis'  |
		g' 8 ( a' 16 bes' 8. ) g' 8  |
%% 35
		fis' 8 ( g' 16 a' 8. ) fis' 8  |
		g' 2  |
		d'' 8 d'' c'' c''  |
		bes' 8. g' r8  |
		a' 8 a' bes' a'  |
%% 40
		g' 4 r  |
		bes' 8 bes' c'' c''  |
		d'' 8. d'' r8  |
		c'' 8. bes' 16 a' 8 g'  |
		fis' 4 r  |
%% 45
		g' 8 g' a' a'  |
		bes' 8. bes' r8  |
		a' 8. g' 16 f' 8 ees'  |
		d' 4 r  |
		d' 8 d' e' fis'  |
%% 50
		g' 8 ( a' 16 bes' 8. ) g' 8  |
		fis' 8 ( g' 16 a' 8. ) fis' 8  |
		g' 8 ( a' 16 bes' 8. ) r8  |
		d' 8 d' e' fis'  |
		g' 8 ( a' 16 bes' 8. ) g' 8  |
%% 55
		fis' 8 ( g' 16 a' 8. ) fis' 8  |
		g' 2  |
		d'' 8 d'' c'' c''  |
		bes' 8. g' r8  |
		a' 8 a' bes' a'  |
%% 60
		g' 4 r  |
		bes' 8 bes' c'' c''  |
		d'' 8. d'' r8  |
		c'' 8. bes' 16 a' 8 g'  |
		fis' 4 r  |
%% 65
		g' 8 g' a' a'  |
		bes' 8. bes' r8  |
		a' 8. g' 16 f' 8 ees'  |
		d' 4 r  |
		d' 8 d' e' fis'  |
%% 70
		g' 8 ( a' 16 bes' 8. ) g' 8  |
		fis' 8 ( g' 16 a' 8. ) fis' 8  |
		g' 8 ( a' 16 bes' 8. ) r8  |
		d' 8 d' e' fis'  |
		g' 8 ( a' 16 bes' 8. ) g' 8  |
%% 75
		fis' 8 ( g' 16 a' 8. ) fis' 8  |
		g' 2 ~  |
		g' 2 ~  |
		g' 2 ~  |
		g' 2  |
%% 80
		fis' 2 ~  |
		fis' 2 ~  |
		fis' 2 ~  |
		fis' 2  |
		ees' 2 ~  |
%% 85
		ees' 2 ~  |
		ees' 2 ~  |
		ees' 2  |
		d' 2 ~  |
		d' 2 ~  |
%% 90
		d' 2 ~  |
		d' 2  |
		g'' 8 g'' 16 g'' 8. r8  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		% intro
		La la la la la la,
		la la la la la la.

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
