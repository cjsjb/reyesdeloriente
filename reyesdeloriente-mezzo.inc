\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble"
		\key g \minor

		R2*8  |
		d' 8 d' c' c'  |
%% 10
		d' 8. d' r8  |
		d' 8 d' c' c'  |
		d' 8. d' r8  |
		d' 8 d' c' c'  |
		d' 8. d' r8  |
%% 15
		d' 8 d' c' c'  |
		d' 8. d' r8  |
		bes' 8 bes' a' a'  |
		g' 8. d' r8  |
		d' 8 d' d' d'  |
%% 20
		d' 4 r  |
		d' 8 d' f' f'  |
		f' 8. f' r8  |
		g' 8. g' 16 f' 8 ees'  |
		d' 4 r  |
%% 25
		g' 8 g' f' f'  |
		f' 8. f' r8  |
		f' 8. ees' 16 d' 8 c'  |
		d' 4 r  |
		d' 8 d' d' d'  |
%% 30
		d' 8. ( g' ) d' 8  |
		d' 8. ( fis' ) d' 8  |
		d' 8. ( g' ) r8  |
		d' 8 d' d' d'  |
		d' 8. ( g' ) d' 8  |
%% 35
		d' 8. ( fis' ) d' 8  |
		d' 2  |
		bes' 8 bes' a' a'  |
		g' 8. d' r8  |
		d' 8 d' d' d'  |
%% 40
		d' 4 r  |
		d' 8 d' f' f'  |
		f' 8. f' r8  |
		g' 8. g' 16 f' 8 ees'  |
		d' 4 r  |
%% 45
		g' 8 g' f' f'  |
		f' 8. f' r8  |
		f' 8. ees' 16 d' 8 c'  |
		d' 4 r  |
		d' 8 d' d' d'  |
%% 50
		d' 8. ( g' ) d' 8  |
		d' 8. ( fis' ) d' 8  |
		d' 8. ( g' ) r8  |
		d' 8 d' d' d'  |
		d' 8. ( g' ) d' 8  |
%% 55
		d' 8. ( fis' ) d' 8  |
		d' 2  |
		bes' 8 bes' a' a'  |
		g' 8. d' r8  |
		d' 8 d' d' d'  |
%% 60
		d' 4 r  |
		d' 8 d' f' f'  |
		f' 8. f' r8  |
		g' 8. g' 16 f' 8 ees'  |
		d' 4 r  |
%% 65
		g' 8 g' f' f'  |
		f' 8. f' r8  |
		f' 8. ees' 16 d' 8 c'  |
		d' 4 r  |
		d' 8 d' d' d'  |
%% 70
		d' 8. ( g' ) d' 8  |
		d' 8. ( fis' ) d' 8  |
		d' 8. ( g' ) r8  |
		d' 8 d' d' d'  |
		d' 8. ( g' ) d' 8  |
%% 75
		d' 8. ( fis' ) d' 8  |
		d' 2 ~  |
		d' 2 ~  |
		d' 2 ~  |
		d' 2  |
%% 80
		c' 2 ~  |
		c' 2 ~  |
		c' 2 ~  |
		c' 2  |
		bes 2 ~  |
%% 85
		bes 2 ~  |
		bes 2 ~  |
		bes 2  |
		bes 2 ~  |
		bes 2 ~  |
%% 90
		bes 2 ~  |
		bes 2  |
		bes' 8 bes' 16 bes' 8. r8  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzosoprano" {
		% intro
		La la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la.

		% Magos del Oriente van hacia Belén...
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

		% Magos del Oriente buscan a Jesús...
		Ma -- gos del O -- rien -- te
		bus -- can a Je -- sús,
		si -- guen a "la es" -- tre -- lla
		de más be -- lla luz,
		si -- guen a "la es" -- tre -- lla
		de más be -- lla luz.

		% Gloria sea a Dios...
		Glo -- ria se -- "a a" Dios,
		a Dios, a Dios.
		Glo -- ria se -- "a a" Dios,
		a Dios, a Dios.

		% Venid adoremos al hijo de Dios...
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
