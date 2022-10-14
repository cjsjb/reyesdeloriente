\context Staff = "baritono" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Barítono"
	\set Staff.shortInstrumentName = "B."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-baritono" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble_8"
		\key g \minor

		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
%% 5
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
%% 10
		g' 8. d' r8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
%% 15
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
%% 20
		g' 4 r  |
		g' 8 g' f' f'  |
		bes 8. bes r8  |
		c' 8. c' 16 c' 8 c'  |
		d' 4 r  |
%% 25
		g' 8 g' f' f'  |
		bes 8. bes r8  |
		f' 8. ees' 16 d' 8 c'  |
		d' 4 r  |
		d' 8 d' d' d'  |
%% 30
		g' 8. ( d' ) d' 8  |
		a' 8. ( d' ) d' 8  |
		g' 8. ( d' ) r8  |
		d' 8 d' d' d'  |
		g' 8. ( d' ) d' 8  |
%% 35
		a' 8. ( d' ) d' 8  |
		g' 2  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
%% 40
		g' 4 r  |
		g' 8 g' f' f'  |
		bes 8. bes r8  |
		c' 8. c' 16 c' 8 c'  |
		d' 4 r  |
%% 45
		g' 8 g' f' f'  |
		bes 8. bes r8  |
		f' 8. ees' 16 d' 8 c'  |
		d' 4 r  |
		d' 8 d' d' d'  |
%% 50
		g' 8. ( d' ) d' 8  |
		a' 8. ( d' ) d' 8  |
		g' 8. ( d' ) r8  |
		d' 8 d' d' d'  |
		g' 8. ( d' ) d' 8  |
%% 55
		a' 8. ( d' ) d' 8  |
		g' 2  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
%% 60
		g' 4 r  |
		g' 8 g' f' f'  |
		bes 8. bes r8  |
		c' 8. c' 16 c' 8 c'  |
		d' 4 r  |
%% 65
		g' 8 g' f' f'  |
		bes 8. bes r8  |
		f' 8. ees' 16 d' 8 c'  |
		d' 4 r  |
		d' 8 d' d' d'  |
%% 70
		g' 8. ( d' ) d' 8  |
		a' 8. ( d' ) d' 8  |
		g' 8. ( d' ) r8  |
		d' 8 d' d' d'  |
		g' 8. ( d' ) d' 8  |
%% 75
		a' 8. ( d' ) d' 8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
%% 80
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
%% 85
		g' 8. d' r8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' d' d'  |
		g' 8. d' r8  |
%% 90
		g' 8 g' d' d'  |
		g' 8. d' r8  |
		g' 8 g' 16 g' 8. r8  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-baritono" {
		% intro
		La la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la,
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
		a Dios, a...

		% outro
		La la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la,
		la la la la la la,
		¡Glo -- "ria a" Dios!
	}
>>
